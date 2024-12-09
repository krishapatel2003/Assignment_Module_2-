/*Write a C program that takes a string from the user and counts the number of vowels and
consonants in the string*/
#include<stdio.h>
main()
{
	int n,r;
	printf("\n\n\t enter any number :");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
}
