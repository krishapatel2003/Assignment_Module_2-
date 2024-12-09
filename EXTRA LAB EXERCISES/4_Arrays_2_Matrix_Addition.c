//C program that accepts two 2x2 matrices from the user and adds them
#include<stdio.h>
main()
{
	int m1[3][3], m2[3][3], m3[3][3],mat[3][3][3];
	int r, c, k,m;
	printf("\n\n---------------------2D--------------------------------");
	printf("\n\n\n\t Matrix [1]");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\t Input m1[%d][%d] : ",r,c);
			scanf("%d",&m1[r][c]);
		}
	}
	
	printf("\n\n\n\t Matrix [2] ");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\t Input m2[%d][%d] : ",r,c);
			scanf("%d",&m2[r][c]);
		}
	}
	
	printf("\n\n\n\t Matrix [1]\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m1[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\t Matrix [2]\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m2[r][c]);
		}
		printf("\n");
	}
	
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			m3[r][c]=0;
			for(k=0;k<3;k++)
			{
				m3[r][c]+=m1[r][k]*m2[k][c];
			}
		}	
	}
	
	printf("\n\n\n\t Matrix[3]\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m3[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n-----------------------------3D-----------------------------");
	for(m=0;m<3;m++)
	{
		printf("\n\n\t Matrix [%d] : ", m+1);
		for(r=0;r<3;r++)
		{
			for(c=0;c<3;c++)
			{
				printf("\n\n\t Input mat[%d][%d][%d] : ", m, r, c);
				scanf("%d",&mat[m][r][c]);
			}
		}
	}
	
	for(m=0;m<3;m++)
	{
		printf("\n\n\t Matrix [%d] : \n\n", m+1);
		for(r=0;r<3;r++)
		{
			for(c=0;c<3;c++)
			{
				printf(" %d", mat[m][r][c]);
			}
			printf("\n");
		}
	}
	

	
	
}
