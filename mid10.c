/*
 * mid10.c
 *
 *  Created on: Oct 12, 2022
 *      Author: 20101
 */
#include "stdio.h"
char MAX(char num);

int main()
{
	int number;
	printf("Enter a number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	printf("  %d \t",MAX(number));
	return 0;
}
char MAX(char num)
{
	char count = 0;
	while(num!=0)
	{
		num = (num&(num<<1));
		count++;
	}
	return count;
}

