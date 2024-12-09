//print to the fibonacci 
#include<stdio.h>
main()
{
	int n,a,h=0,i=1,j;
	printf("enter the number to fibonacci: ");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		printf("%d ",h);
		j=h+i;
		h=i;
		i=j;
	}
	printf("\n");
}

