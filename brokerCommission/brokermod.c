/* When stocks are sold through a broker, the broker's commission is often computed using a sliding scale that depends upon the value of stocks traded. Let's say that a broker charges the amounts shown in the following table:

:---
Transaction size | Commission rate
:---
Under $2500 | $30 + 1.7%
$2500 - $6250 | $56 + 0.66%
$6250 - $20,000 | $76 + 0.34%
$20,000 - $50,000 | $100 + 0.22%
$50,000 - $500,000 | $155 + 0.11%
Over $500,000 | $255 + 0.09%

Modify the program by making both of the following changes:
1. Ask the user to enter the number of shares and the price per share, instead of the value of the trade.
2. Add statements that compute the commission charged by a rival broker ($33 plus 3c per share for fewer than 2000 shares;
$33 plus 2c per share for 2000 shares or more).
Display the rival's commission as well as the commission charged by the original broker. */

#include <stdio.h>

int main() {

	float transaction_size = 0.0f;
	float commission = 0.0f;
	float shares = 0.0f;
	float price_per_share = 0.0f;
	float rival_commission = 0.0f;

	printf("Enter the number of shares: ");
	scanf("%f", &shares);

	printf("Enter the price per share: $ ");
	scanf("%f", &price_per_share);

	// printf("Enter stock value: ");
	// scanf("%f", &transaction_size);
	/*

	*/

	if (shares < 2000.00f){
		rival_commission = ((shares * 0.03f) + 33.00f);

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
	} else if (shares >= 2000.00f){
		rival_commission = ((shares * 0.02f) + 33.00f);

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
	}

	if (commission < 39.00)
	commission = 39.00;

	printf("Broker commission: $ %.2f\n", commission);
	printf("Rival commission: $ %.2f\n", rival_commission);

	return 0;

}
