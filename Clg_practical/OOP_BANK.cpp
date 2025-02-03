#include<iostream>
using namespace std;

void deposite()
{
	
}
int main()
{
	int choice;
	cout<<"\t\t\t\tWELCOME TO OOP BANK"<<endl;
	cout<<"\t\t\t-------------------------------------"<<endl;
	while(true)
	{
		cout<<"1.Deposite Amoount"<<endl<<"2.Withdraw Amount"<<endl<<"3.Print last 10 Statements"<<endl<<"4.Exit"<<endl;
		cout<<"Enter Your Choice - ";
		cin>>choice;
	
		switch(choice)
		{
			case 1:
				//cout<<"deposite"<<endl;
				deposite();
				break;
			case 2:
				cout<<"Withdraw"<<endl;
				break;
			case 3:
				cout<<"Statements"<<endl;
				break;
			case 4:
				exit(0);
				break;
			default:
				cout<<"Wrong Choice!!"<<endl;
				break;
		}
	
	}
	return 0;	
}
