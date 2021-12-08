#include<stdio.h>
void main()
{
	int eng, mat, phy, che, cs, total, percentage;
	printf("Enter marks for eng, mat, phy, che, cs respectively");
	scanf("%d%d%d%d%d", &eng, &mat, &phy, &che, &cs);
	if(eng>=35 && mat>=35 && phy>=35 && che>=35 && cs>=35)
	{
		printf("Pass\n");
		printf("Total marks out of %d is %d\n",500, total);
		printf("Percentage: %d", percentage);
		printf("Grade: ");
	}
		if(percentage>=90)
		{
			printf("O");
		}
		if(percentage>=80)
		{
			printf("A");
		}
		if(percentage>=70)
		{
			printf("B");
		}
		if(percentage>=60)
		{
			printf("C");
		}
		if(percentage>=50)
		{
			printf("D");
		}
		if(percentage>=40)
		{
			printf("E");
		
		}
	else
	{
		printf("Fail");
	}
}


