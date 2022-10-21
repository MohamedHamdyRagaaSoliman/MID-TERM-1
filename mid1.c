/*
 * mid1.c
 *
 *  Created on: Oct 12, 2022
 *      Author: 20101
 */
#include"stdio.h"
#include"math.h"
void sum_dig(int n)
{
	int temp , sum=0 , rem;
	for(;n!=0;)
	{
		rem = n%10;
		sum+=rem;
		n/=10;


	}
	printf("the sum of dig is : %d  " , sum);
	fflush(stdout); fflush(stdin);
}
int main()
{
	int num;
	printf("enter the number : ");
	fflush(stdout); fflush(stdin);
	scanf("%d" , &num);
	sum_dig(num);

}

