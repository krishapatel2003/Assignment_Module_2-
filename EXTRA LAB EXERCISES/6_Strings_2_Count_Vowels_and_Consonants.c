/*Write a C program that takes a string from the user and counts the number of vowels and
consonants in the string*/
#include<stdio.h>
main()
{
	char ch;
	printf("\n\n\t Enter the any charecter :");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )  
	{
		printf("\n\n\t character is vowel...");
	}
	else
	{
		printf("\n\n\t character is consonant.....");
	}
}
