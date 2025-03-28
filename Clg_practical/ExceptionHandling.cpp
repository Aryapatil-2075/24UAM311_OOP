#include<iostream>
using namespace std;
 
int main()
{
	int n,d,r;
	cout<<"Enter First Number :";
	cin>>n;
	cout<<"Enter Second Number :";
	cin>>d;	
   try
   {
	  if(d==0)
	  {
		 throw d;
	  }
      r=n/d;   
	  cout<<"Result :"<<r;
   }
   catch(int e)
   {
   	cout<<"d="<<e<<endl;
   	cout<<"Exception:d cannot be zero,Divide by zero exception"<<endl;
   }	 
return 0;
}

