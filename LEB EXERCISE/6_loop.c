#include<stdio.h>
main() 
{
	int i,j,k;
    printf("\n\n\t--------------------------Using while loop-----------------------\n");
    i=1;
    while(i<=10)
	{
        printf("\t %d ",i);
        i++;
    }
    printf("\n");

    printf("\n\n\t--------------------------Using for loop-------------------------\n");
    for(j=1; j<=10; j++) 
	{
        printf("\t %d ",j);
    }
    printf("\n");

    printf("\n\n\t--------------------------Using do-while loop--------------------\n");
    k=1;
    do{
        printf("\t %d ",k);
        k++;
    } while (k<=10);
    printf("\n");
}
