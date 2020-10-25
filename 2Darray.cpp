#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int A[2][3] = {{2,4,6},{3,6,9}};
	int i,j;
	for(i=0;i<2; i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<A[i][j];
		}
		cout<<endl;
	}
	return 0;
}
