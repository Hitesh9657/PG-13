//3.	Write a C program to print ASCII value of a character.

#include<stdio.h>

int main()
{
	int c;
	
	for(c=0; c<255; c++)
	{
		printf("ASCII value of %c character::%d\n",c,c);
	}
	return 0;
}
