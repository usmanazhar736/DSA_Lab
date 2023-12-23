#include<iostream>
using namespace std;

int main()
{
	int f_n;
	int* p1;
	p1 = &f_n;
	cout<<"Enter first number"<<endl;
	cin>>f_n;
	
	cout<<"The value at address "<<p1<<" is "<<*p1;
	return 0;
}
