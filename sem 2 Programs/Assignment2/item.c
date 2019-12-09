/*
Write a program in C to define a structure that holds Information of items like- Item
Number, Item Names, Item Category( Electronics, Food, Cosmetics etc), Available stock.
Display the available items.*/


#include<stdio.h>
struct item  
{
	int item_no;
	char name[20];
	char category[20];
	int stock;
}item1[10];
int main()
{
	int i,n;
	printf("\nenter the number of items: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)		
		{
			printf("\nenter the item number: ");
			scanf("%d",&item1[i].item_no);
			printf("\nenter the name of item: ");
			scanf("%s",item1[i].name);
			printf("\nenter the categoty of the item (Electronics, Food or Cosmetics): ");
			scanf("%s",item1[i].category);
			printf("\nenter the available stock of the item : ");
			scanf("%d",&item1[i].stock);
		}
printf("Item number\t\tItem name\t\tCategory\t\tAvailable Stock");
for (i=0;i<n;i++)
{
printf("%d\t\t%s\t\t%s\t\t%d",item1[i].item_no,item1[i].name,item1[i].category,item1[i].stock);
}
return 0;
}


/*OUTPUT: 
enter the number of items: 3

enter the item number: 1

enter the name of item: CD

enter the categoty of the item (Electronics, Food or Cosmetics): Electronics

enter the available stock of the item : 30

enter the item number: 2

enter the name of item: Biscuits

enter the categoty of the item (Electronics, Food or Cosmetics): Food

enter the available stock of the item : 50

enter the item number: 3

enter the name of item: Lipstick

enter the categoty of the item (Electronics, Food or Cosmetics): Cosmetics

enter the available stock of the item : 10
Item number		Item name		Category		Available Stock
1				CD				Electronics	30
2				Biscuits			Food		50
3				Lipstick			Cosmetics	10	
pl-ii@plii-dx2480-MT:~/Desktop/FE-D-07/ASSIGNMENT2$ */

