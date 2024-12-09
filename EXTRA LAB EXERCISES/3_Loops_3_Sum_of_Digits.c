/*
C program that takes an integer from the user and calculates the sum of its digits
using a while loop
*/
#include<stdio.h>
main()
{
	int n,sum=0,r;
	
	printf("\n\n\t Enter any number :");
	scanf("%d",&n);

	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	
	}
	printf("sum of digits: %d ", sum);
    
}
