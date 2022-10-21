/*
 * mid9.c
 *
 *  Created on: Oct 12, 2022
 *      Author: 20101
 */
#include "stdio.h"
//Reverse Words in a String
void Reverse_String(char * a , int s);
int main()
{
	char  str[] = " mohamed gamal";
	int size = sizeof(str)/sizeof(str[0]);
	Reverse_String(str,size);
	return 0;
}
void Reverse_String(char * a , int s)
{
	char new_str[100];
	int Counter_new_str;
	for(int i = s-1 ; i > 0 ; i--)
	{
		if( a[i] == ' ')
		{
			for(int j = Counter_new_str-1; j >= 0 ; j--)
			{
				printf("%c",new_str[j]);
			}
			printf(" ");
			Counter_new_str = 0 ;
		}
		else
		{
			new_str[Counter_new_str] = a[i];
			Counter_new_str++;

		}


	}
	if(Counter_new_str != 0 )
	{
		for(int j = Counter_new_str-1 ; j>= 0 ; j--)
		{
			printf("%c", new_str[j]);
		}


	}
}
