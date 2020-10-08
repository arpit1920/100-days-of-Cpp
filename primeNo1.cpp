#include <iostream>
using namespace std;

int main()
{
	int n,count=0;
	cout<<"Enter a no. ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}

	if(count==2)
		cout<<"It's a Prime\n";
	else
		cout<<"It's not a Prime\n";
	return 0;
}
