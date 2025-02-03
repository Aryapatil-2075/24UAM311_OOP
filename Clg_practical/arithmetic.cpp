#include<iostream>
using namespace std;


int addition(int num1,int num2)
{
	return num1+num2;
}
int subtraction(int num1,int num2)
{
	return num1-num2;
}
int multiplication(int num1,int num2)
{
	return num1*num2;
}
int division(int num1,int num2)
{
	return num1/num2;
}
int main()
{
	int choice,num1,num2;
	cout<<"Enter Any Two Numbers - ";
	cin>>num1>>num2;
	while(true)
	{
		cout<<"1. Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.division"<<endl<<"Exit"<<endl;
	
	
	cout<<endl<<"Enter Your Choice - ";
	cin>>choice;
	switch(choice)
	{
		case 1: 
			cout<<"ADDITION - "<<addition(num1,num2)<<endl;
			break;
		case 2: 
			cout<<"SUBTRACTION - "<<subtraction(num1,num2)<<endl;
			break;
		case 3: 
			cout<<"MULTIPLICATION - "<<multiplication(num1,num2)<<endl;
			break;
		case 4: 
			cout<<"DIVISION - "<<division(num1,num2)<<endl;
			break;
		case 5:
			exit(0);
			break;
		default :
			cout<<endl<<"Wrong Choice!!";
			break;
	}
	}
	return 0;
}
