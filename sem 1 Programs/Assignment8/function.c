//write a C Program with function to compute addition and subtraction of two matrices


#include<stdio.h>
#include<stdlib.h>
void matadd(int [10][10],int [10][10], int, int);
void matsub(int [10][10],int [10][10], int, int);

int main()
{
int a[10][10], b[10][10],add[10][10],sub[10][10];
int r1,r2,c1,c2,i,j,ch;
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

do
{
	printf("\n1.addition \n2. sutraction\n3.exit");
	printf("\nenter your choise: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: if((r1==r2)&&(c1==c2))
				{ 
				matadd(a,b,r1,c1);
				}
				else
				{
				printf("\nAddition is not possible");
				}
		break;
		case 2: if((r1==r2)&&(c1==c2))
				{
				matsub(a,b,r1,c1);
				}
				else
				{
				printf("\nsubtraction is not possible");
				}
		break;
		case 3 :  exit (0);
				break;
		default : printf("\nplease enter a valid choise i.e 1,2 OR 3 only");
				break;
	}
}while(ch!=3);
return 0;
}

void matadd(int a[10][10], int b[10][10],int r1 ,int c1)
{
	int i,j;
	int add[10][10];
for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
		{
		add[i][j]=a[i][j]+b[i][j];
		}
	}
printf("\nthe matrix of addition is:\n");
for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
		{
			printf("%d",add[i][j]);
			printf("\t");
		}
	printf("\n");
	}
}
void matsub(int a[10][10],int b[10][10], int r1 , int c1)
{
int i,j;
int sub[10][10];
for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
		{
		sub[i][j]=a[i][j]-b[i][j];
		}
	}
printf("\nthe matrix of subtraction is:\n");
for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
		{
			printf("%d",sub[i][j]);
			printf("\t");
		}
	printf("\n");
	}
}


enter no of rows and columns for first matrix:2 2

enter no of rows and columns for second matrix:2 2

enter elements for array A:1 2 3 4

the elements in the array A are
:1	2	
3	4	

/*enter elements for array B:1 2 3 4

the elements in the array B are
:1	2	
3	4	

1.addition 
2. sutraction
3.exit
enter your choise: 1

the matrix of addition is:
2	4	
6	8	

1.addition 
2. sutraction
3.exit
enter your choise: 2

the matrix of subtraction is:
0	0	
0	0	

1.addition 
2. sutraction
3.exit
enter your choise: 3
pl-ii@plii-dx2480-MT:~/Desktop/vbfpl$ 
*/






