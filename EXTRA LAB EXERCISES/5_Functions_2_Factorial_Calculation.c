/*Write a C program that calculates the factorial of a given number using a function*/
#include<stdio.h>
main()
{
	int num, i,fact=1;
	
	printf("\n\n\t Enter a number to find its factorial ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("\n\n\t Factorial of %d is %d ",num,fact);
	
}
