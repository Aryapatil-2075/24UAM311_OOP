#include<iostream>
using namespace std;

template<typename T>
T findMax(T a, T b)
{
	return(a>b)?a:b;
}

template<typename T>
class Calculator{
	T a,b;
	public:
		Calculator(T x,T y):a(x),b(y){
		}
		T add(){
			return a+b;
		}
		T subtract()
		{
			return a-b;
		}
		T multiply()
		{
			return a*b;
		}
		T divide()
		{
			return a/b;
		}
};
int main()
{
	cout<<"Max of 5 and 10 is:"<<findMax(5,10)<<endl;
	
	Calculator<int>c1(5,10);
	cout<<"Integer operations "<<endl;
	cout<<"5+10="<<c1.add()<<endl;
	cout<<"5-10="<<c1.subtract()<<endl;
	cout<<"5*10="<<c1.multiply()<<endl;
	cout<<"5/10="<<c1.divide()<<endl;
	
	Calculator<float>c2(3.5f,2.0f);
	cout<<"float operations "<<endl;
	cout<<"3.5+2.0="<<c2.add()<<endl;
	cout<<"3.5-2.0="<<c2.subtract()<<endl;
	cout<<"3.5*2.0="<<c2.multiply()<<endl;
	cout<<"3.5/2.0="<<c2.divide()<<endl;
	
	Calculator<double>c3(4.5,1.5);
	cout<<"Double operations "<<endl;
	cout<<"4.5+1.5="<<c3.add()<<endl;
	cout<<"4.5-1.5="<<c3.subtract()<<endl;
	cout<<"4.5*1.5="<<c3.multiply()<<endl;
	cout<<"4.5/1.5="<<c3.divide()<<endl;
}
