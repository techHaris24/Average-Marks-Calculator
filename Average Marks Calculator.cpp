#include<iostream>
using namespace std;
int main()
{
	float om,tm,avg;
	cout<<"Enter obtained marks:"<<endl;
	cin>>om;
	cout<<"Enter total marks"<<endl;
	cin>>tm;
	avg=(om+tm)/2;
	cout.precision(4);
	cout<<"Average is "<<avg;
}
