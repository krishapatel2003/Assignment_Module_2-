#include<stdio.h>
main()
{
    int num, month;

    printf("\n\n\t Enter an integer: ");
    scanf("%d",&num);  

    if (num%2==0) 
	{
        printf("\n\n\t %d is even.", num);
    }
	else 
	{
        printf("\n\n\t %d is odd.", num);
    }

    printf("\n\n\t Enter the month num(1-12): ");
    scanf("%d", &month);  
    switch(month) 
	{
        case 1:  
			printf("\n\t January"); 
			break;
        case 2: 
			printf("\n\t February"); 
			break;
        case 3: 
			printf("\n\t March");
			break;
        case 4:  
			printf("\n\t April"); 
			break;
        case 5:  
			printf("\n\t May"); 
			break;
        case 6:  
			printf("\n\t June"); 
			break;
        case 7:  
			printf("\n\t July"); 
			break;
        case 8:  
			printf("\n\t August"); 
			break;
        case 9:  
			printf("\n\t September"); 
			break;
        case 10: 
			printf("\n\t October"); 
			break;
        case 11: 
			printf("\n\t November"); 
			break;
        case 12: 
			printf("\n\t December"); 
			break;
        default: 
			printf("\n\n\t Invalid month number.Please enter a number 1 and 12."); 
			break;
    }
}
