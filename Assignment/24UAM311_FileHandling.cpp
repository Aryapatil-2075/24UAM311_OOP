
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class File_Encryptor {
private:
    string filename;
    int encrypt_Key;

    
    string encrypt(string msg) {
        for (size_t i = 0; i < msg.length(); ++i)
            msg[i] += encrypt_Key;
        return msg;
    }

    
    string decrypt(string msg) {
        for (size_t i = 0; i < msg.length(); ++i)
            msg[i] -= encrypt_Key;
        return msg;
    }

public:
    
    File_Encryptor(string fname, int key) : filename(fname), encrypt_Key(key) {}

    
    void encryptAndWrite(const string& message) 
	{
        ofstream file(filename.c_str(), ios::app);

        if (file.is_open()) 
		{
            string encrypted = encrypt(message);
            file << encrypted;
            file.close();
            cout << "Message successfully encrypted !! and stored in : " << filename << endl;
        } 
		else 
		{
            cout << "Error opening file for writing." << endl;
        }
    }


    string readAndDecrypt() {
        ifstream file(filename.c_str(),ios::app);
        string encrypted;
        if (file.is_open()) {
            getline(file, encrypted);
            file.close();
            return decrypt(encrypted);
        } else {
            cout << "Error opening file for reading." << endl;
            return "";
        }
    }

    
    void displayFileContents() {
        string decrypted = readAndDecrypt();
        if (!decrypted.empty()) {
            cout << "Decrypted Message: " << decrypted << endl;
        }
    }
};

int main() 
{
    File_Encryptor fe("data.txt", 3); // Caesar shift of 3

    string message;
    cout << "Enter a message to encrypt: ";
    getline(cin, message);

    fe.encryptAndWrite(message);

    cout << "\nReading and decrypting file..." << endl;
    fe.displayFileContents();

    return 0;
}
