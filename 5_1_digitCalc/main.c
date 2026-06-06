#include <stdio.h>
#include <stdbool.h>

int main(){
	int num;
	int digit;
	bool invalid = false;

	printf("Enter a positive number up to 4 digits: ");
	scanf("%d", &num);

	if (num >= 0 && num < 10) {
		digit = 1;
	}

	else if (num >= 10 && num < 100){
		digit = 2;
	}

	// lame

	else if (num >= 100 && num < 1000){
		digit = 3;
	}

	else if (num >= 1000 && num < 10000){
		digit = 4;
	}

	else if (num < 0 || num >= 10000){
		invalid = true;
	}

	if (invalid == true){
		printf("Invalid number!\n");
	} else if (digit == 1){
		printf("The number %d has %d digit.\n", num, digit);
	} else {
		printf("The number %d has %d digits.\n", num, digit);
	}
	return 0;

}
