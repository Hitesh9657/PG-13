//14.	Write a C Program to Check Whether the Entered Year is Leap Year or not.

#include<stdio.h>

int main()
{
	int year;
	printf("Enter a Year::");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("Enter Year is Leap year");
	}
	else
	{
		printf("Enter Year is non Leap year");
	}
	return 0;
}
