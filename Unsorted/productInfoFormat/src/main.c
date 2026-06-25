#include <stdio.h>

int main()
{
	int itemNum, month, day, year;
	float unitPrice;

	printf("Enter item number: ");
	scanf("%d", &itemNum);

	printf("Enter unit price: ");
	scanf("%f", &unitPrice);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnit\t\tPurchase\n    \t\tPrice\t\tDate\n%-d\t\t$4.2\t"
		"\t%02d/%02d/%04d\n", itemNum, unitPrice, month, day, year);		
	return 0;
}
