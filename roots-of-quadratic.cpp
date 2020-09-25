#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	float r1, r2, discriminant;
	cout<<"Enter the values of a,b,c";
	cin>>a>>b>>c;
	discriminant = b*b - 4*a*c;
	r1 = (-b + sqrt(discriminant)) / (2*a);
	r2 = (-b - sqrt(discriminant)) / (2*a);
	cout<<"the roots of the equation are"<<endl;
	cout<<"r1="<<r1<< endl;
	cout<<"r2="<<r2<< endl;
	return 0;
}
