/*C program that checks whether a given number is a prime number or not using a for
loop*/
#include<stdio.h>
main()
{
	int n,count=0,i;
	printf("enter any number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("\n\n\t Prime number....");
	}
	else
	{
		printf("\n\n\t Not Prime number...");
	}
}
