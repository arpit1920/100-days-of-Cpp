#include<iostream>
using namespace std;
int main()
{
    int m1[3][3], m2[3][3], i, j, m3[3][3];
    cout<<"\n Enter First Matrix Elements : \n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<" ";
            cin>>m1[i][j];
        }
    }
    cout<<"\n Enter Second Matrix Elements : \n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
    {
        cout<<" ";
        cin>>m2[i][j];
    }
    }
    cout<<"\n Difference of Two Matrices : \n\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        	m3[i][j]=m1[i][j]-m2[i][j];
    	}
    }
    for(i=0; i<3; i++)
    {
        cout<<" ";
        for(j=0; j<3; j++)
        {
            cout<<m3[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
