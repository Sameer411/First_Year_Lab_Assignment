/*Write a C program to compute the roots of given quadratic equation for non-zero
coefficients.*/

#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,ch;
float d,x1,x2;
printf("Enter 3 numbers for a,b,c");
scanf("%d%d%d",&a,&b,&c);
d=((b*b)-(4*a*c));
printf("d is= %f",d);
if(d<0)
{
printf("\nRoots are Imaginary!");
ch=1;
}
else if(d==0)
{
printf("\nRoots are Identical!");
ch=2;
}
else
{
printf("\nRoots are Distinct!");
ch=3;
}
switch(ch)
{
case 1: x1=(-b)/(2*a)+sqrt(-d)/(2*a);
	x2=(sqrt(-d))/(2*a);
	printf("\nroots of quadratic are\n");
	printf("\nroots are = %f+i%f",x1,x2);
	printf("\nroots are = %f-i%f",x1,x2);
	break;
case 2: x1=(-b)/(2*a);
	printf("\nroots of quadratic are\n");
	printf("x1 = %f\n",x1);
	break;
case 3: x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf("\nroots of quadratic are\n");
	printf("x1 = %f\n",x1);
	printf("x1 = %f\n",x2);
	break;
}
}



/*pl-ii@plii-dx2480-MT:~/Desktop/vbfpl$ gcc quad.c -o a1 -lm
pl-ii@plii-dx2480-MT:~/Desktop/vbfpl$ ./a1

Enter 3 numbers for a,b,c 3 4 5
d is= -44.000000
Roots are Imaginary!
roots of quadratic are
roots are = 1.105542+i1.105542
roots are = 1.105542-i1.105542
pl-ii@plii-dx2480-MT:~/Desktop/vbfpl$*/ 










