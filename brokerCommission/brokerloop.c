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

    while(1){
        printf("Enter stock value: ");
    	scanf("%f", &transaction_size);

        if (transaction_size == 0){
            return 0;
        }

    	if (transaction_size < 2500.00f)
    		commission = (30.00f + (transaction_size * 0.017f));
    	else if (transaction_size < 6250.00f)
    		commission = (56.00f + (transaction_size * 0.0066f));
    	else if (transaction_size < 20000.00f)
    		commission = (76.00f + (transaction_size * 0.0034f));
    	else if (transaction_size < 50000.00)
    		commission = (100.00f + (transaction_size * 0.0022f));
    	else if (transaction_size < 500000.00f)
    		commission = (155.00f + (transaction_size * 0.0011f));
    	else if (transaction_size >= 500000.00)
    		commission = (255.00f + (transaction_size * 0.0009f));

    	if (commission < 39.00f)
    		commission = 39.00f;

    	printf("Broker commission: $%.2f\n", commission);

    }

	return 0;

}
