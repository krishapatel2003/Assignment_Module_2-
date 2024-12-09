#include <stdio.h>
main()
{
	int i;

    printf("\n\n\t Using break statement:");
    for(i=1; i<=10; i++) 
	{
        if (i==5) 
		{
            break; 
        }
        printf("%d ",i);
    }
    printf("\n");

    printf("\n\n\t Using continue statement:");
    for(i=1; i<=10; i++) 
	{
        if (i==9) 
		{
            continue; 
        }
        printf("%d ",i);  
    }
    printf("\n");
}
