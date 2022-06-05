/*5.	Write a C program to find quotient and remainder.
 Read divisor and dividend and then find the quotient and remainder,
  results will be printed on the screen.*/
  
#include<stdio.h>

int main()
{
	int num,quotient,rem;
	printf("Enter a number::");
	scanf("%d",&num);
	
	quotient=num/2;
	rem=num%2;
	
	printf(" Quotient=%d \n remainder=%d",quotient,rem);
	
	return 0;
}  
