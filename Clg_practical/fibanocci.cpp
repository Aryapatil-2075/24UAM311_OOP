#include<iostream>
using namespace std;

void fibnocci(int n)
{
	int n1=0,n2=1,nxtTerm = 0,i;
	for(i = 1; i<=n; ++i)
	{
		if(i == 1)
		{
			cout<<n1<<" ";
			continue;
		}
		if(i == 2)
		{
			cout<<n2<<" ";
			continue;
		}
		nxtTerm = n1+n2;
		n1 = n2;
		n2 = nxtTerm;
		
		cout<<nxtTerm<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter any number you want to continue fibanocci series - ";
	cin>>n;
	
	fibnocci(n);
	return 0;
}
