//Write a C program to store N numbers in an array and search a particular number.
#include<stdio.h>
void main()
{
int a[20];
int n,ele,i,flag=0;
printf("\nenter the number of the elements: ");
scanf("%d",&n);
printf("\nenter elements in the array: ");
for (i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("\nthe entered elements in the array are: ");
for (i=0;i<n;i++)
{
	printf("%d",a[i]);
}
printf("\nenter the element you want to search: ");
scanf("%d",&ele);
i=0;
while(i<n)
{
	if(a[i]==ele)
	{
		printf("\nthe entered element found at location %d",i+1);
		flag=1;
	}
i++;
}
	if(flag==0)
	{
		printf("\nenter element is not found");
	}
}


/*enter the number of the elements: 10

enter elements in the array: 1 2 3 4 5 6 7 8 9 0

the entered elements in the array are: 1 2 3 4 5 6 7 8 9 0
enter the element you want to search: 7

the entered element found at location 7*/

/*enter the number of the elements: 5

enter elements in the array: 1 2 3 4 5

the entered elements in the array are: 1 2 3 4 5 
enter the element you want to search: 7

enter element is not found*/




