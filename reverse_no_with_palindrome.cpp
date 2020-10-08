#include<iostream>
using namespace std;
int main()
{
	int n,r, rev=0;
	cout<<"enter the number";
	cin>>n;
	while (n>0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	cout<<"The reverse of the number is:"<<rev<<endl;
	if (rev==n)
	{
		cout<<"The number is palindrome"<<endl;
	}
	else
	{
		cout<<"The number is not palindrome"<<endl;
	}
	return 0;
}
