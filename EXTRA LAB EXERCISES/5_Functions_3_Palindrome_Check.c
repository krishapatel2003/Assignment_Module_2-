/*Write a C program that takes a number as input and checks whether it is a palindrome using
a function.*/
#include<stdio.h>
main()
{
	int n,c,sum=0,r;
	printf("Enter any number :");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		sum=r+(sum*10);
		n=n/10;
	}
	if(c==sum)
	{
		printf("\n\n\t Palindrome number....");		
	}
	else
	{
		printf("\n\n\t Not Palindrome number....");
	}
}
