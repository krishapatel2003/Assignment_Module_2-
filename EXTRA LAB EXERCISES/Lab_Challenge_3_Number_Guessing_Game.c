//
#include<stdio.h>
main()
{
	int num,guess,i=0,count=0,arr[100];
	srand(time(0));
	num=rand()%100+1;
	printf("the number is %d",num);
	while(guess!=num)
	{
		printf("Enter a number : ");
		count+=scanf("%d",&guess,"\n");
		if(guess>num)
		{
			printf("lower number please..\n");
		}
		else if(guess<num)
		{
			printf("higher number please..\n");
		}
		
		arr[i++]=guess;
	}
	printf("Total Number of times are %d\n",count);
	if(count>=6)
	{
		printf("You are lose! because you are won more than 5 time \n");
	}
	else
	{
		printf("congrat! You are win");
	}
	printf("Enter number are: \n");
	for(i=0;i<=count;i++)
	{
		printf("%d",arr[i]);
	}
}
