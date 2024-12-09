#include <stdio.h>
main()
{
    int arr[5];
    int i,j;
    
    printf("Enter 5 integers:\n");
    for (i=0; i<5; i++) 
	{
        printf("Enter element %d: ", i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nThe 5 integers are:\n");
    for (i=0; i<5; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    int matrix[3][3];
    int sum=0;

    printf("\nEnter the elements of a 3x3 matrix:\n");
    for (i=0; i<3; i++) 
	{
        for(j=0; j<3; j++) 
		{
            printf("Enter element at [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 3x3 matrix is:\n");
    for(i=0; i<3; i++) 
	{
        for(j=0; j<3; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++) 
	{
        for(j=0; j<3; j++) 
		{
            sum+=matrix[i][j];
        }
    }

    printf("\nThe sum of all elements in the 3x3 matrix is: %d\n", sum);
}
