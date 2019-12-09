//Write a program to generate first 20 fibonacci numbers.

#include<stdio.h>
int main()
{
	int prev,next,fib,cnt=0,n;
	printf("enter the terms: ");
	scanf("%d",&n);
	printf("Fibonacci Series is: \n");
	prev=0;
	next=1;
	printf("%d\t%d",prev,next);
	do
	{
		fib=prev+next;
		printf("\t %d",fib);
		prev=next;
		next=fib;
		cnt=cnt+1;
	}
	while(cnt<=n);
return 0;
}

/*pl-ii@plii-dx2480-MT:~/Desktop$ ./a.out
enter the terms: 20
Fibonacci Series is: 
0	1	 1	 2	 3	 5	 8	 13	 21	 34	 55	 89	 144	 233	 377	 610	 987	 1597	 2584	 4181	 6765	 10946	 17711pl-ii@plii-dx2480-MT:~/Desktop$*/ 

