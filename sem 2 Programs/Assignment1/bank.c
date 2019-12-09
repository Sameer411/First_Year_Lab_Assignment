/*
Write a program in C to define a structure for Customer bank account that holds
Information like Account Number, Name of account holder, balance, Internet banking
facility availed(Yes or No), Pin code ( 422001 to 422013) , Account type(saving,
recurring, deposit).
a) Read account details for N customers
b) Identify the golden, silver and general customers.
Golden customers: Balance> 10,00000
Silver Customers: Balance >500000 and <10,00000
General customers: Balance <500000
c) Display the list of customers availing the Internet banking facility
d) Display the customers belonging to a particular geographical location depending on
postal code
e) Display the customer list as per their account type.*/



#include<stdio.h>
struct customer  
{
	int acc_no;
	char name[20];
	float balance;
	int pincode;
	char INB;
	char acc_type[20];
}c1[10];
int main()
{
	int i,n,ch,search_pin;
	printf("\nenter the number of customer: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)		
		{
			printf("\nenter the account number: ");
			scanf("%d",&c1[i].acc_no);
			printf("\nenter the name of customer : ");
			scanf("%s",c1[i].name);
			printf("\nenter the  bank balance : ");
			scanf("%f",&c1[i].balance);
			printf("\nenter the pincode : ");
			scanf("%d",&c1[i].pincode);
			printf("\nenter if Internet Bank Facility is awailed or not(Y or N): ");
			scanf(" %c",&c1[i].INB);
			printf("\nenter the account type : ");
			scanf("%s",c1[i].acc_type);
			
		}
do 
{
printf("\n1.Disply type of customer:");
printf("\n2.Display list of customers availing internet banking:");
printf("\n3.Display customers belonging to perticular geographical location :");
printf("\n4.list of customers according to account type:");
printf("\n5.Exit:");
printf("\nenter your choice:");
scanf("%d",&ch);
	switch(ch)
		{
		case 1:
		for(i=0;i<n;i++)
		{
			if(c1[i].balance<500000)
			{	
				printf("\n%s is a GENERAL customer",c1[i].name);
			}
			else if((c1[i].balance>500000)&&(c1[i].balance<1000000))
			{
					printf("\n%s is SILVER customer",c1[i].name);
			}
			else
			{
				printf("\n%s is GOLD customer",c1[i].name);
			}
		}
		break;

		case 2: 
		for(i=0;i<n;i++)
		{
			if((c1[i].INB=='Y')||(c1[i].INB=='y'))
			{
				printf("\n%s is availing Internet Banking faciliity",c1[i].name);
			}
		}
		break;

		case 3: 
			printf("enter pincode you want to search for:");
			scanf("%d",&search_pin);
		for(i=0;i<n;i++)
		{
			if(search_pin==c1[i].pincode)
			{
				printf("\n%s ",c1[i].name);
			}
		}
		break;

		case 4:
		printf("\nname\t\t\ttype");
		for(i=0;i<n;i++)
		{
			printf("\n%s\t\t\t%s",c1[i].name,c1[1].acc_type);
		}
		break;

		case 5: 
				break;
		
		default : printf("\n please enter a valid choice");
				break;			
		}

}while(ch!=5);
return 0;
}




/*OUTPUT:

enter the number of customer: 3

enter the account number: 4651

enter the name of customer : vaibhav

enter the  bank balance : 54654.26

enter the pincode : 422101

enter if Internet Bank Facility is awailed or not(Y or N): Y

enter the account type : savings

enter the account number: 46465

enter the name of customer : vinay

enter the  bank balance : 6546546.23

enter the pincode : 422101

enter if Internet Bank Facility is awailed or not(Y or N): Y

enter the account type : savings

enter the account number: 464653

enter the name of customer : purvesh

enter the  bank balance : 1654656.23

enter the pincode : 422100

enter if Internet Bank Facility is awailed or not(Y or N): N

enter the account type : current

1.Disply type of customer:
2.Display list of customers availing internet banking:
3.Display customers belonging to perticular geographical location :
4.list of customers according to account type:
5.Exit:
enter your choice:2

vaibhav is availing Internet Banking faciliity
vinay is availing Internet Banking faciliity
1.Disply type of customer:
2.Display list of customers availing internet banking:
3.Display customers belonging to perticular geographical location :
4.list of customers according to account type:
5.Exit:
enter your choice:*/




