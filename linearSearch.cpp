#include<iostream>
using namespace std;
int main()
{
	int A[10], index, n=10, key, i;
	cout<<"Enter the elements in array";
	for(i=0; i<n; i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the Key";
	cin>>key;
	for (i=0; i<n; i++)
	{
		if (key == A[i])
		{
			cout<<key;
		}
	}
	return 0;
}
