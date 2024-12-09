/*Operators:
-- Whether the number is even or odd.
-- Whether the number is positive, negative, orzero.
-- Whether the number is a multiple of both 3 and 5   */
#include<stdio.h>
main()
{
	int i,number,num;
	printf("\n\n\t Enter the number: ");
	scanf("%d",&i);
	
	if(i%2==1)
	{
		printf("\n\n\t odd number ");
	}
	else
	{
		printf("\n\n\t even number ");
	}
	
	printf("\n\n\t --------------------\n");
	
	printf("\n\n\t Enter the number: ");
	scanf("%d",&number);
	
	if(number>=0)
	{
		printf("\n\t Enter Number is positive.");
	}
	else if(number<0)
	{
		printf("\n\t Enter Number is Negative");
	}
	else if(number==0)
	{
		printf("\n\t Enter Number is Zero");
	}
	else
	{
		printf("\n\t Number is invalid");
	}
	
	printf("\n\n\t --------------------\n");
	printf("\n\n\t Enter the number: ");
	scanf("%d",&num);

	if(num%3==0 && num%5==0)
	{
		printf("\n\t it is divided number ");
	}
	else
	{
		printf("\n\t it is not divided number ");
	}
}
