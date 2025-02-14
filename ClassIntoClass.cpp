#include<iostream>
using namespace  std;

class Bank
{
	public:
		int acc_no=123456;
		int acc_balance=50000;
		string acc_name="Arya Patil";
	public:
		
		void getBankInfo()
		{
			cout<<"Account Name :"<<acc_name<<endl;
			cout<<"Account Number :"<<acc_no<<endl;
			cout<<"Account Balance :"<<acc_balance<<endl;
		}
		class Transaction
		{
			private:
				int amount;
			public:
					void getDeposite(int &acc_balance)
					{
				       cout<<"Enter Amount you want to Desposite :"<<endl;
			           cin>>amount;
				       if(amount<=acc_balance)
				       {
				          acc_balance=acc_balance+amount;
				          cout<<"Total deposit amount :"<<acc_balance<<endl;
				       }
				
	             	}        
			        void getWithdraw(int &acc_balance)
			        {
				       cout<<"Enter Amount you want to Withdraw :"<<endl;
				       cin>>amount;
				       if(amount<=acc_balance)
				       {
				          acc_balance=acc_balance-amount;
				          cout<<"Total deposit amount :"<<acc_balance<<endl;
				       }
				       else
			        	{
					        cout<<"Insufficient Balance !!"<<endl;
			         	}
		        	}
		};
};
int main()
{
	Bank b;
	b.getBankInfo();
	Bank::Transaction t;
	t.getDeposite(b.acc_balance);
	t.getWithdraw(b.acc_balance);
	return 0;
	
}
