//write a C program to accept a string and change the case of each character of the string.Example "this is a c program" changes to "THIS IS A C PROGRAM".
#include<stdio.h>
#include<string.h>
void main()
{
int i,n;
char s1[30];
printf(" A string is to be converted \n Please enter the string \n");
scanf("%[^\n]",s1);
printf("Before changing string is %s ",s1);
n=strlen(s1);
for(i=0;i<n;i++)
{
if(s1[i]>='a'&&s1[i]<='z')
{
s1[i]=s1[i]-32;
}
else if(s1[i]>='A'&&s1[i]<='Z')
{
s1[i]=s1[i]+32;
}

}
printf("After changing string is %s",s1);
}


/*
A string is to be converted 
 Please enter the string 
this is a program
Before changing string is this is a c program 
After changing string is THIS IS A C PROGRAM
pl-ii@plii-dx2480-MT:~/Desktop/vbfpl1/changecase.c$ */

