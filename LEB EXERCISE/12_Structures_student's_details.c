#include <stdio.h>

struct Student 
{
    char name[50];
    int rollNumber;
    float marks;
};

main()
{
	int i,
    struct student students[3];

    for(i=0; i<3; i++) 
	{
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;  

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
        
        getchar();  
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) 
	{
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

}
