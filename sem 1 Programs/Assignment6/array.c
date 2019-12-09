//Write a C program to store n numbers in an array and display the square of each number in the array.
#include<stdio.h>
void main()
{
int array1[10],array2[10],i,n,m;
printf("enter how many no's you want in array:");
scanf("%d",&n);
printf("\nenter numbers in the array\n");
for(i=0;i<=n;i++)
{
	scanf("%d",&array1[i]);
}
printf("entered numbers in the array are\n");
for(i=0;i<=n;i++)
{
	printf("%d \t",array1[i]);	
}
printf("\n the squares of the numbers are:\n");
for(i=0;i<=n;i++)
{
	array2[i]=array1[i]*array1[i];
	printf("%d \t",array2[i]);
}



/*enter how many no's you want in array:5

enter numbers in the array
1 2 3 4 5
5
entered numbers in the array are
1 	2 	3 	4 	5 	5 	
 the squares of the numbers are:
1 	4 	9 	16 	25 	25 	pl-ii@plii-dx2480-MT:~/Desktop/vbfpl$ */



