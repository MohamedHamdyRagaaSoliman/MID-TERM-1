/*
 * mid4.c
 *
 *  Created on: Oct 12, 2022
 *      Author: 20101
 */
#include <stdio.h>
void rev_number(int n)
{
	int j=0;
	for(;n!=0;)
	{
		j=n%10;
		n/=10;
		printf("%d" , j);
	}
}

int main() {
	int num;
	printf("enter the number to reverse digit : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	rev_number(num);
}

