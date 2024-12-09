/* Write a C program that counts the number of words in a sentence entered by the user.*/
#include<stdio.h>
main()
{
	char a[100];
	int i,word=1;
	printf("\n Enter you name : ");
	gets(a);
	i=0;
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		word++;
		i++;
	}
	printf("\n\n\t number of words=%d ",word);
	getch();

}
