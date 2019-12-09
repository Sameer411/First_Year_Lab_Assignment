//addition of  2 array
#include<stdio.h>
//#include<stdlib.h>
void main()
{
int a[10][10],b[10][10],add[10][10],sub[10][10];
int r1,r2,c1,c2,i,j,k;
printf("\nenter no of rows and columns for first matrix:");
scanf("%d%d",&r1,&c1);
printf("\nenter no of rows and columns for second matrix:");
scanf("%d%d",&r2,&c2);
printf("\nenter elements for array A:");
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
printf("\nthe elements in the array A are\n:");
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
	printf("%d",a[i][j]);
	printf("\t");
	}
printf("\n");
}
printf("\nenter elements for array B:");
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	{
	scanf("%d",&b[i][j]);
	}
}
printf("\nthe elements in the array B are\n:");
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	{
	printf("%d",b[i][j]);
	printf("\t");
	}
printf("\n");
}
if((r1==r2)&&(c1==c2))
{
for(i=0;i<r2;i++)
	{
	for(j=0;j<c2;j++)
		{
		add[i][j]=a[i][j]+b[i][j];
		}
	}
printf("\nthe matrix of addition is:\n");
for(i=0;i<r2;i++)
	{
	for(j=0;j<c2;j++)
		{
			printf("%d",add[i][j]);
			printf("\t");
		}
	printf("\n");
	}
for(i=0;i<r2;i++)
	{
	for(j=0;j<c2;j++)
		{
		sub[i][j]=a[i][j]-b[i][j];
		}
	}
printf("\nthe matrix of subtraction is:\n");
for(i=0;i<r2;i++)
	{
	for(j=0;j<c2;j++)
		{
			printf("%d",sub[i][j]);
			printf("\t");
		}
	printf("\n");
	}
}
else
{
	printf("arithmetic operations are not possible");
}
}


/*enter no of rows and columns for first matrix:2 2

enter no of rows and columns for second matrix:2 2

enter elements for array A:1 2 3 4

the elements in the array A are
:1	2	
3	4	

enter elements for array B:1 2 3 4

the elements in the array B are
:1	2	
3	4	

the matrix of addition is:
2	4	
6	8	

the matrix of subtraction is:
0	0	
0	0	
pl-ii@plii-dx2480-MT:~/Desktop/*/



	



