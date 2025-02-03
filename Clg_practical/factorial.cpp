#include<iostream>
using namespace std;
int factorial(int num)
{
	int fact = 1;
	while(num!=0)
	{
		fact *=num;
		num--;
	}
	return fact;
}
int main()
{
	int num;
	cout<<"Enter any Number - "<<endl;
	cin>>num;
	cout<<"Factorial of "<<num<<" is "<<factorial(num);
	return 0;	
}
