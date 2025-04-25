#include<iostream>
using namespace std;

class InsufficientFundsException {};
class InvalidTransactionException {};
class DivideByZeroException {};

class BankAccount {
    string name;
    double balance;

public:
    BankAccount(string n, double amount) {
        if (amount < 0) throw InvalidTransactionException();
        name = n;
        balance = amount;
    }

    void deposit(double amount) {
        if (amount < 0) throw InvalidTransactionException();
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance) throw InsufficientFundsException();
        balance -= amount;
    }

    void transfer(BankAccount &to, double amount) {
        if (amount > balance) throw InsufficientFundsException();
        balance -= amount;
        to.balance += amount;
    }

    void divideBalance(double number) {
        if (number == 0) throw DivideByZeroException();
        balance /= number;
    }

    void show() {
        cout << name << " Balance: " << balance << endl;
    }
};

int main() {
    try {
        BankAccount Arya("Arya", 5000);
        BankAccount Ayush("Ayush", 0);

        Arya.deposit(1000);
        Arya.withdraw(7000); 

    } catch (InsufficientFundsException) {
        cout << "Not enough money!" << endl;
    } catch (InvalidTransactionException) {
        cout << "Invalid transaction!" << endl;
    } catch (DivideByZeroException) {
        cout << "Can't divide by zero!" << endl;
    }

    try {
        BankAccount Arya("Arya", 5000);
        BankAccount Ayush("Ayush", 0);

        Arya.transfer(Arya, 3000);
        Arya.show();
        Ayush.show();

        Arya.divideBalance(0); // throws DivideByZeroException

    } catch (...) {
        cout << "Something went wrong...." << endl;
    }

    return 0;
}

