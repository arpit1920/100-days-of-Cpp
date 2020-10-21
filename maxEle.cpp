#include<iostream>
using namespace std;
int main()
{
	int A[10] = {2,4,6,8,10,12,14,16,18,20};
	int i, max=A[0], n=10;
	for (i=0; i<n;i++)
	{
		if (A[i]>max)
		{
			max = A[i];
		}
	}
	cout<<max;
	return 0;
}
