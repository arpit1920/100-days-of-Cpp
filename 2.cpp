#include<iostream>
using namespace std;
int main() {
	int m,n,o;
	bool red = true;
	bool white = true;
	bool blue = true;
	
	int a=(m%2), b=(n%2), c = (o%2);	
	m=126, n=80, o=49;
	cout<< red <<endl;
	cout<< white <<endl;
	cout<< blue <<endl;
	
	red = false;
	white = false;
	blue = false;
	
	cout<< a + b + c <<endl;
	cout<< m+red+white + blue <<endl;
	return 0;
}
