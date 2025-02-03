#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
	private:
		int roll_no;
		string name;
		string address;
	public:
		void getInfo()
		{
			cout<<"Enter Student Roll no :";
			cin>>roll_no;
			cout<<endl<<"Enter Student Name :";
			cin>>name;
			cout<<endl<<"Enter Student Address :";
			cin>>address;
		}
		void DisplayInfo()
		{
			cout<<"----------------------------------"<<endl;
			cout<<right<<"Roll_no"<<setw(15)<<right<<"Student_Name"<<setw(20)<<right<<"Student_Address"<<setw(15)<<endl;	
			cout<<"----------------------------------"<<endl;
			cout<<roll_no<<setw(10)<<name<<setw(15)<<address<<setw(10)<<endl;
			//cout<<"Student Roll_no :"<<roll_no<<endl<<"Student Name :"<<name<<endl<<address<<endl;
			
		}
		
};
int main()
{
	Student s1;
	s1.getInfo();
	s1.DisplayInfo();
	return 0;
}
