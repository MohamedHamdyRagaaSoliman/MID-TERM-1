/*
 * mid7.c
 *
 *  Created on: Oct 12, 2022
 *      Author: 20101
 */
#include <stdio.h>

int sum(int n)

{
	return ((n+1)*(n/2));
}
int main() {
	int numb;
	printf("enter number ");
	scanf("%d" , &numb);
	printf("%d" , sum(numb));
}

