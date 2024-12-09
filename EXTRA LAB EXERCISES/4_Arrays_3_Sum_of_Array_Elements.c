/*C program that takes N numbers from the user and stores them in an array. The
program should then calculate and display the sum of all array elements.*/
#include<stdio.h>
main()
{
	int a[5],i,sum=0;
	printf("\n\t enter array Elements :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("sum of array Elements:");
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
}
