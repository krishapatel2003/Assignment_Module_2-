/*
C program that takes three numbers from the user and determines:
The largest number.
The smallest number
*/
#include<stdio.h>
main()
{
    int n1, n2, n3;
    
    printf("\n\t------------------if else------------------\n");
    printf("\n\n\t Enter the first number: ");
    scanf("%d", &n1);
    
    printf("\n\t Enter the second number: ");
    scanf("%d", &n2);
    
    printf("\n\t Enter the third number: ");
    scanf("%d", &n3);
    
    if (n1 >= n2 && n1 >= n3)
    {
        printf("\n\n\t First number is the largest.");
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        printf("\n\t Second number is the largest.");
    }
    else
    {
        printf("\n\n\t Third number is the largest.");
    }
    
    printf("\n\t------------------if else small------------------\n");
    printf("\n\n\t Enter the first number: ");
    scanf("%d", &n1);
    
    printf("\n\t Enter the second number: ");
    scanf("%d", &n2);
    
    printf("\n\t Enter the third number: ");
    scanf("%d", &n3);
    
    if (n1 <= n2 && n1 <= n3)
    {
        printf("\n\n\t First number is the smallest.");
    }
    else if (n2 <= n1 && n2 <= n3)
    {
        printf("\n\t Second number is the smallest.");
    }
    else
    {
        printf("\n\n\t Third number is the smallest.");
    }
    
    int choice;
    printf("\n\n\t------------------switch------------------");
    printf("\n\n\t Enter 1 to find largest, 2 to find smallest: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
            if (n1 >= n2 && n1 >= n3)
            {
                printf("\n\t First number is the largest.");
            }
            else if (n2 >= n1 && n2 >= n3)
            {
                printf("\n\t Second number is the largest.");
            }
            else
            {
                printf("\n\t Third number is the largest.");
            }
            break;
        
        case 2:
            if (n1 <= n2 && n1 <= n3)
            {
                printf("\n\t First number is the smallest.");
            }
            else if (n2 <= n1 && n2 <= n3)
            {
                printf("\n\t Second number is the smallest.");
            }
            else
            {
                printf("\n\t Third number is the smallest.");
            }
            break;
        
        default:
            printf("\n\t Invalid choice.");
            break;
    }
    
}
