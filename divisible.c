#include<stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	if(a%3==0 && a%7==0)
	{
		printf("Given number is divisible with 3 & 7");
	}
	else
	{
		printf("Given number is not divisible with 3 & 7");
	}
} 
