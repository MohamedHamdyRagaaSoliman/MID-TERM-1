/*
 * mid.c
 *
 *  Created on: Oct 12, 2022
 *      Author: 20101
 */
#include <stdio.h>

char uniq(int arr[] , int s)
{
	int d = 0 , i ;
	for(i=0;i<s;i++)
	{
		d^=arr[i];
	}
}
int main() {
	int a[100], si , i;
	printf("enter size of array : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&si);
	for(i=0 ; i<si;i++)
	{
		printf("enter element of array : %d \n" , i+1);
		fflush(stdout);fflush(stdin);
		scanf("%d" , &a[i]);
	}
	printf("uni number is : %d "  , uniq(a,si));
}

