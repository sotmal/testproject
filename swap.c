/*
 ============================================================================
 Name        : swap.c
 Author      : sot
 Version     :
 Copyright   : sot
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/* dev test commit #2 */
void swap(int* i,int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;

}

void swap_double(double* i,double* j)
{
	double temp = *i;
	*i = *j;
	*j = temp;

}

int main(void) {
	int nr1=55,nr2=66;
	double dnr1 = 0.443, dnr2 = 0.2323;
	swap(&nr1,&nr2);
	swap_double(&dnr1,&dnr2);
	printf("nr1 is now : %d\n",nr1);
	printf("nr2 is now : %d\n",nr2);
	printf("dnr1 is now : %lf\n",dnr1);
	printf("dnr2 is now : %lf\n",dnr2);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
