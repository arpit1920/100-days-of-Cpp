#include<iostream>
using namespace std;
int main()
{
	float bill;
	float discount = 0.0;
	cout<<"Enter the amount";
	cin>>bill;
	if (bill>=500)
	{
		discount = bill*0.2;
	}
		
	else if (bill>=100 && bill<500)
		{
			discount = bill*0.1;
		}
	
	cout<<"Bill Amount is"<<bill<<endl;
	cout<<"Discount Amount is"<<discount<<endl;
	cout<<"Discounted Amount is"<<(bill-discount)<<endl;
}
