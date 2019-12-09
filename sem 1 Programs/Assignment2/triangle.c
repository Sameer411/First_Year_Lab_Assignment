//Write a C program to accept the length of three sides of a triangle and to test and print the type of triangle as equilateral,isosceles or right angled or none.

#include<stdio.h>
void main()
{
	int a,b,c,s1,s2,s3;
	s1=a*a;
	s2=b*b;
	s3=c*c;
	printf("\n Enter 3 sides of triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	if((a==b)&&(b==c)&&(a==c))
	{
	printf("\ntringle is equilateral tringle ");
	}
	else if(((a==b)&&(b==c))||((a==b)&&(b==c))||(a==b)&&(b==c))
	{
	printf("\nTringle is isosceles");
	}
	else if((s1=s2+s3)||(s2=s1+s3)||(s3=s1+s2))
	{
	printf("\nTringle is right angled Tringle ");
	}
	else
	{
	printf("\nIt is not equilateral ,not isosceles, nor right angle triangle");
	}
	}
/*
OUTPUT1  TRIANGLE OF DIFFERENT TYPE
Enter side1  2      
Enter side2  3
Enter side3  5
It is not equilateral ,not isosceles, nor right angle triangle

OUTPUT2 FOR EQUILATERAL TRIANGLE
Enter side1  4
Enter side2  4
Enter side3  4
It is equilateral

OUTPUT3 FOR ISOSCELES TRIANGLE
Enter side1  2
Enter side2  4
Enter side3  4
It is isosceles triangle

OUTPUT4 FOR RIGHT ANGLE TRIANGLE
Enter side1  5
Enter side2  12
Enter side3  13
It is right angle triangle
*/
