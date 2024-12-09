#include<stdio.h>  
main()
{
    int num1, num2; 

    printf("Enter first integer: ");
    scanf("%d",&num1);  
	
	printf("Enter second integer: ");
    scanf("%d",&num2);  

    printf("\n\n------------------Arithmetic Operations---------------------");
    printf("\n%d + %d = %d", num1, num2, num1+num2);  
    printf("\n%d - %d = %d", num1, num2, num1-num2);  
    printf("\n%d * %d = %d", num1, num2, num1*num2);  
    printf("\n%d / %d = %d", num1, num2, num1/num2);  
    printf("\n%d %% %d = %d", num1, num2, num1%num2); 

    
    printf("\n\n----------------Relational Operations------------------------");
    printf("\n%d == %d: %s", num1, num2, num1==num2 ? "True":"False"); 
    printf("\n%d != %d: %s", num1, num2, num1!=num2 ? "True":"False"); 
    printf("\n%d > %d: %s", num1, num2, num1>num2 ? "True":"False");
    printf("\n%d < %d: %s", num1, num2, num1<num2 ? "True":"False"); 
    printf("\n%d >= %d: %s", num1, num2, num1>=num2 ? "True":"False"); 
    printf("\n%d <= %d: %s", num1, num2, num1<=num2 ? "True":"False"); 

    printf("\n\n----------------Logical Operations----------------------------");
    printf("\n%d && %d: %s", num1, num2, (num1&&num2) ? "True":"False"); 
    printf("\n%d || %d: %s", num1, num2, (num1||num2) ? "True":"False"); 
    printf("\n!%d: %s", num1, (!num1) ? "True":"False"); 
}
