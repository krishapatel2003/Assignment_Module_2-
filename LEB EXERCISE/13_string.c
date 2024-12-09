#include <stdio.h>
main() 
{
    FILE *file;  
    char str[]="Hello, this is a test string written to the file.";

    file=fopen("example.txt", "w");  
    if(file==NULL) 
	{
        printf("Error opening file for writing!\n");
        return 1; 
        
    }
    fprintf(file, "%s", str);  
    
    fclose(file); 
    printf("String written to the file successfully.\n");

    file=fopen("example.txt", "r"); 
    if(file==NULL) 
	{
        printf("Error opening file for reading!\n");
    }

    char ch;
    printf("\nContents of the file:\n");
    while ((ch=fgetc(file))!=EOF) 
	{  
        putchar(ch);  
    }
    fclose(file);  
}
