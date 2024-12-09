//print the maximum and minimum values
#include<stdio.h>
main()
{
	int num, i ,min,max;
	
	printf("\n\n\t Enter 10 number ");
	
	printf("\n\n\t Enter the number 1: ");
	scanf("%d",&num);
	
	max=num;
	min=num;
	
	for(i=2;i<=10;i++)
	{
		printf("\n\n\t Enter the number %d:",i);
		scanf("%d",&num);
		if(num>max)
		{
			max=num;
		}
		else if(num<min)
		{
			min=num;
		}
		
	}
	printf("\n\n\t the maximum number is :%d",max);
	printf("\n\n\t the minimum number is :%d",min);	


}
