#include "Series.h"

Series::Series(int n)
{

}

int Series::fibonacciIt(int n)
{
		
	int a=1;
	int b=1;
	int c=0;
	
	for (int i = 1; i <= n-2; ++i)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}

int Series::fibonacciRec(int n)
{
	if (n <= 2)
		return 1;
		
	return fibonacciRec(n-1)+fibonacciRec(n-2);

}

int Series::factorialIt(int n)
{
		
	float b=1;
	
	for (int i = 1; i <= n ; i++)
		b*=i;
	return b;
}

int Series::factorialRec(int n)
{
	if(n<=1)
		return 1;
	return factorialRec(n-1)*n;
}