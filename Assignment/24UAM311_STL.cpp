#include<iostream>
#include<map>
#include<vector>
#include<numeric>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	map<string,vector<int>>students;
	int n;
	cout<<"Enter number of students:";
	cin>>n;
	int i,j;
	for( i=0;i<n;i++)
	{
		string name;
		vector<int>marks(3);
		cout<<"Enter student name:";
		cin>>name;
		cout<<"Enter 3 marks:";
		for(j=0;j<3;j++)
		{
			cin>>marks[j];
		}
		students[name]=marks;
}
string topper;
double highest_avd=0;

for(auto&s:students){
	double avg=accumulate(s.second.begin(),s.second.end(),0)/3.0;
	cout<<"Student :"<<s.first<<",Marks:";
	for(int m:s.second){
		cout<<m<<"";
	}
	cout<<",Average :"<<avg<<endl;
	if(avg>highest_avd)
	{
	    highest_avd=avg;
	    topper=s.first;
	}
}
cout<<"Topper :"<<topper<<"with average"<<highest_avd<<endl;
return 0;
}
