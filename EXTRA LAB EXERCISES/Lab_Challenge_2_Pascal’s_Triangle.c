//Write a C program that generates Pascal’s Triangle up to N rows using loops
#include<stdio.h>
main()
{
	int row=5,i,j,sp,coef=1;
	for(i=0;i<row;i++)
	{
		for(sp=1;sp<=row-i;sp++)
		printf(" ");
		for(j=0;j<=i;j++)
		{
			if(j==0 || i==0)
			{
				coef=1;
			}
			else
			{
				coef=coef*(i-j+1)/j;
				printf(" %d",coef);
			}
		}
		printf("\n");
	}
}
