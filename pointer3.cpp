#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of array";
	cin>>size;
	int *p=new int[size];
	
	cout<<"enter new size";
	cin>>size;
	p=new int[size];
	return 0;
}
