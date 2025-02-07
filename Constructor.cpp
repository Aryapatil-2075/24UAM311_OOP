#include<iostream>
using namespace std;

class Box
{
	private:
		int length;
		int height;
		int width;
	public:
		void getBoxInfo()
		{
			cout<<length<<endl<<height<<endl<<width<<endl;
		}
		void setBoxInfo(int x,int y,int z)
		{
			length=x;
			height=y;
			width=z;
		}		
};
Box()
{
	cout<<"Construct"
}
int main()
{
	Box b1;
	b1.getBoxInfo();
	b1.setBoxInfo(5,6,7);
	b1.getBoxInfo();
}

