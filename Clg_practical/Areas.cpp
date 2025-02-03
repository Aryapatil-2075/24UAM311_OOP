#include<iostream>
#include<iomanip>
using namespace std;
class Area
{
	private:
		float area;
	public:
		void areaofcircle(float r)
		{
			cout<<"Area of circle :"<<3.14*r*r<<endl;
		}
		void areaofrectangle(float l,float b)
		{
			cout<<"Area of Rectangle :"<<l*b<<endl;
		}
		void areaoftriangle(float h,float b)
		{
			cout<<"Area of Triangle :"<<0.5*h*b<<endl;
		}
		void areaofsquare(float side)
		{
			cout<<"Area of Square :"<<side*side<<endl;
		}
};
int main()
{
	Area a1;
	a1.areaofcircle(3);
	a1.areaofrectangle(2,2);
	a1.areaofsquare(4);
	a1.areaoftriangle(6,6);
	return 0;
}
