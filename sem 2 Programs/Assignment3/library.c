/*
Write a program in C using structure for maintaining departmental library informationbook
record (Accession number, title, edition, author and tag. The tag can be either
purchase cost or name of the donor. Use union within structure for tag. Display list of
purchased and donated books separately.*/

#include<stdio.h>
typedef union 
{
char donor[20];
float price;
}u;
typedef struct 
{
int accno;
char title[20];
char edition[20];
char author[20];
int t;
u tag;
}s;

int main()
{
int i,n,c;
printf("\nWelcome to the library\nPlease enter the details of the books");
printf("\nPlease enter the no of book: ");
scanf("%d",&n);
s book[i];
for(i=0;i<n;i++)
{
printf("\nDetails of book :%d",(i+1));
printf(" \nAccesssion number:");
scanf("%d",&book[i].accno);
printf("title:");
scanf("%s",book[i].title);
printf("Edition:");
scanf("%s",book[i].edition);
printf("AUTHOR:");
scanf("%s",book[i].author);
printf("Please enter the type of the tag\n0:DONATED BOOK\n1:PURCHASED BOOK\n TYPE:");
scanf("%d",&book[i].t);
if(book[i].t==0)
{
printf("\nPlease enter the donor name:");
scanf("%s",book[i].tag.donor);
}
else
{
printf("\nPlease enter the price:");
scanf("%f",&book[i].tag.price);
}
}
do
{
printf("\nWhich types of books you want to display\n0:DONATED BOOKS\n1:PURCHASED BOOKS\n2:EXIT\nTYPE:");
scanf("%d",&c);
if(c==0)
{
printf("\nDONATED BOOKS:");
printf("\nNAME\tACCESSION NO.\tEDITION\tAUTHOR\tDONOR\t");
for(i=0;i<n;i++)
{
if(c==book[i].t)
{
printf("\n%s\t%d\t%s\t%s\t%s",book[i].title,book[i].accno,book[i].edition,book[i].author,book[i].tag.donor);
}
}
}
if(c==1)
{
printf("PURCAHSED BOOKS:");
printf("\nNAME\tACCESSION NO.\tEDITION\tAUTHOR\tPRICE\t");
for(i=0;i<n;i++)
{
if(c==book[i].t)
{
printf("\n%s\t%d\t%s\t%s\t%f",book[i].title,book[i].accno,book[i].edition,book[i].author,book[i].tag.price);
}
}
}
}while(c!=2);
}







/*OUTPUT:

Write a program in C using structure for maintaining departmental library
information- book record(Accession number,title,edition, author and tag )
The tag can be either purchase cost or name of the donor. Use union within structure for tag.Display list of purchased and donated books separately
OUTPUT:-

Welcome to the library
Please enter the details of the books
Please enter the no of book: 3

Details of book :1 
Accesssion number:12345
title:H
Edition:1
AUTHOR:J
Please enter the type of the tag
0:DONATED BOOK
1:PURCHASED BOOK
 TYPE:0

Please enter the donor name:purvesh

Details of book :2 
Accesssion number:56788
title:S
Edition:3
AUTHOR:K
Please enter the type of the tag
0:DONATED BOOK
1:PURCHASED BOOK
 TYPE:1

Please enter the price:50

Details of book :3 
Accesssion number:34567
title:M
Edition:4
AUTHOR:J
Please enter the type of the tag
0:DONATED BOOK
1:PURCHASED BOOK
 TYPE:0

Please enter the donor name:purvesh

Which types of books you want to display
0:DONATED BOOKS
1:PURCHASED BOOKS
2:EXIT
TYPE:0

DONATED BOOKS:
NAME	ACCESSION NO.	EDITION	AUTHOR	DONOR	
H	         12345			1		J		purvesh
M	         34567			4		J		purvesh
Which types of books you want to display
0:DONATED BOOKS
1:PURCHASED BOOKS
2:EXIT
TYPE:1
PURCAHSED BOOKS:
NAME	ACCESSION NO.	EDITION	AUTHOR	PRICE	
S		56788			3		K		50.000000
Which types of books you want to display
0:DONATED BOOKS
1:PURCHASED BOOKS
2:EXIT
TYPE:2
pl-ii@plii-HP-dx2480-MT-FX801PA:~/FE-D-07/ASSIGNMENT3$ 

*/
