/*
Marks > 90: Grade A
-- Marks > 75 and <= 90: Grade B
-- Marks > 50 and <= 75: Grade C
-- Marks <= 50: Grade D
? Use if-else orswitch statements for the decision-making process.
*/
#include<stdio.h>
main()
{
	int mark;
	printf("\n\n\t Enter the mark : ");
	scanf("%d",&mark);
	
	if(mark>90)
	{
		printf("\n\t grade A ");
	}
	else if(mark>75 && mark<=90)
	{
		printf("\n\t grade B ");
	}
	else if(mark>50 && mark<=75)
	{
		printf("\n\t grade C ");
	}
	else if(mark=50)
	{
		printf("\n\t grade D ");
	}
	else
	{
		printf("\n\t fall ");
	}
	
		
			
}
