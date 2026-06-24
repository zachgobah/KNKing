#include <stdio.h>
#include <stdbool.h>
#define NUM_DIGITS 10

int main(void) {
	bool digit_seen[NUM_DIGITS] = {false};
	int digit;
	long n;
	int i = 0;
	int which_digits[NUM_DIGITS] = {0};

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]){
			which_digits[i] = digit;
			i++;
			n /= 10;
			continue;
		}
		digit_seen[digit] = true;
		n /= 10;
	}

	if (which_digits[0] == 0){
		printf("No repeated digits.\n");
	} else {
		printf("Repeated digit(s): ");
		for (i = 0; i < NUM_DIGITS; i++){
			if (which_digits[i] == 0) {
				printf("\n");
				break;
			} else {
				printf("%d ", which_digits[i]);
			}
		}
	}

	return 0;
}


