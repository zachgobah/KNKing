/* When stocks are sold through a broker, the broker's commission is often computed using a sliding scale that depends upon the value of stocks traded. Let's say that a broker charges the amounts shown in the following table:

:---
Transaction size | Commission rate
:---
Under $2500 | $30 + 1.7%
$2500 - $6250 | $56 + 0.66%
$6250 - $20,000 | $76 + 0.34%
$20,000 - $50,000 | $100 + 0.22%
$50,000 - $500,000 | $155 + 0.11%
Over $500,000 | $255 + 0.09% */

#include <stdio.h>

int main() {

	float transaction_size = 0.0;
	float commission = 0.0;

	printf("Enter stock value: ");
	scanf("%f", &transaction_size);

	if (transaction_size < 2500.00)
		commission = (30.00 + (transaction_size * 0.017));
	else if (transaction_size < 6250.00)
		commission = (56.00 + (transaction_size * 0.0066));
	else if (transaction_size < 20000.00)
		commission = (76.00 + (transaction_size * 0.0034));
	else if (transaction_size < 50000.00)
		commission = (100.00 + (transaction_size * 0.0022));
	else if (transaction_size < 500000.00)
		commission = (155 + (transaction_size * 0.0011));
	else if (transaction_size >= 500000.00)
		commission = (255.00 + (transaction_size * 0.0009));

	if (commission < 39.00)
		commission = 39.00;

	printf("Broker commission: $%.2f\n", commission);

	return 0;

}
