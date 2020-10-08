#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], sum=0,i;
	int smallest = 9999;
	int smallest_index=-1;
	printf("Enter the elements of Array");
	for (i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i=0; i<5; i++)
	{
		smallest = a[i];
		smallest_index = i;
	}
	printf("The smallest element of an array is %d and the index of element is %d",smallest,smallest_index);
}
