/*
 * mid5.c
 *
 *  Created on: Oct 12, 2022
 *      Author: 20101
 */
#include <stdio.h>
int binary_ones(int n)
{
	int j=0;
	for(;n!=0;)
	{
		if(n%2)
			j++;
		n/=2;
	}
	return j;
}

int main() {
	int num;
	printf("enter a decimal number to get ones in her binary : ");
	fflush(stdout);fflush(stdin);
	scanf("%d" , &num);
	printf("%d" , binary_ones(num));
}
