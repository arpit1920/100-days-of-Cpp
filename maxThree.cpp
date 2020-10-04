#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter three Numbers";
	cin>>a>>b>>c;
	
	if(a>b && a>c)
	{
		cout<<"Maximum of three is"<<a;
	}
	
	else
	{
		if(b>c)
		{
			cout<<"Maximum of three is"<<b;
		}
		else
		{
			cout<<"Maximum of three is"<<c;
		}
	}
	
	return 0;
}
