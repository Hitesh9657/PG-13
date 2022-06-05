/*4.	Write C program to find cube of an integer number using two different methods.
	1. Without using Built-in Function pow().
	2. Using Built-in Function pow()- (Make use of Math.h )
*/

#include<stdio.h>
#include<math.h>
int main()

/*
{
	int num,cube;
	printf("Enter no:");
	scanf("%d",&num);
	cube=(num*num*num);
	printf("Cube=%d",cube);
	return 0;
}
*/
{
    int num,cube;
	printf("Enter no:");
	scanf("%d",&num);
	cube=pow(num,3);

	printf("Cube=%d",cube);
	return 0;
}
