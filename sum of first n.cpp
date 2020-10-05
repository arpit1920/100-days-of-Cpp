#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int sum = 0;
	cout<<"enter n";
	cin>>n;
	for(i=0; i<=n; i++)
	{
		sum+=i;
	}
	cout<<"sum of first n is"<<sum;
	return 0;
}
