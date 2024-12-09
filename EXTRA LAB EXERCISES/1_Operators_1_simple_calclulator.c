/*C program that acts as a simple calculator(addition,
subtraction, multiplication, division, or modulus)*/
#include<stdio.h>
main()
{
	int n1,n2,calculation;
	char ch;
	do
	{
	printf("\n\n\t Enter the first number : ");
	scanf("%d",&n1);
	printf("\n\t Enter the second number : ");
	scanf("%d",&n2);
	
	printf("\n\n------------------------------MENU----------------------------\n\n");	
	printf("\n\t 1.Addition");
	printf("\n\t 2.Subtraction");
	printf("\n\t 3.Multiplication");
	printf("\n\t 4.division");
	printf("\n\t 5.modulus");
	printf("\n\n--------------------------------------------------------------\n\n");	

	printf("\n\n\t select any one choice : ");
	scanf("%d",&calculation);
	switch(calculation)
	{
		case 1:
			printf("\n\t Addition : %d",n1+n2);
			break;
		
		case 2:
			printf("\n\t Subtraction : %d",n1-n2);
			break;
		
		case 3:
			printf("\n\t Multiplication : %d",n1*n2);
			break;
			
		case 4:
			printf("\n\t division : %d",n1/n2);
			break;
			
		case 5:
			printf("\n\t modulus : %d",n1%n2);
			break;
			
		default:
			printf("\n invelid choice plz slect velid choice(1to5) ");
			break;
			
	}
	printf("\n\n\t do you want continu??(y/n) : ");
	scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
}
