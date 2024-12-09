//Write a program to find all Armstrong numbers between 1 and 1000
#include<stdio.h>
main()
{
	int i,num,x,sum,mem;
	for(i=1;i<=1000;i++)
	{
		sum=0;
		num=i;
		mem=num;
		while(num>0)
		{
			x=num%10;
			num=num/10;
			sum=sum+x*x*x;
		}
		if(sum==mem)
		{
			printf("%d\n",mem);
		}
	}
}
