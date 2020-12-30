#include<iostream>
using namespace std;
int a, b, sum;
sum(a, b)
{
	return (a+b);
}

float sum, a, b;
sum(a, b)
{
	return (a+b);
}

int sum, a, b, c;
sum(a,b,c) 
{
	return(a+b+c);
}

int main()
{
	cout<<sum(10,5)<<endl;
	cout<<sum(12.5f,3.4f)<<endl;
	cout<<sum(10,20,3)<<endl;
	return 0;
}
