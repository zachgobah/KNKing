/* Computes a Universal Product Code check digit. */

#include <stdio.h>
#include "typewriter.h"

int main () 
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total, checkdigit;

	typewriter("Enter the UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &checkdigit);

	first_sum = ( d + i2 + i4 + j1 + j3 + j5);
	second_sum = ( i1 + i3 + i5 + j2 + j4 );
	total = (first_sum * 3.0 ) + second_sum - 1;
	total = total % 10;
	if (checkdigit == (9 - total)){
		printf("UPC VALID\n");
	} else { printf("INVALID\n"); }

	return 0;

}
