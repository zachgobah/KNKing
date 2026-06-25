#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double amount;
	double withTax;

	printf("Enter an amount: $");
	scanf("%lf", &amount);

	withTax = (amount * 1.05);
	
	printf("With tax added: $%.2lf", withTax);
	
	return 0;

}