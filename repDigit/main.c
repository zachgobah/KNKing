#include <stdio.h>
#define NUM_DIGITS 10
#define MAX_SIZE 256

int main(void) {
	int n[MAX_SIZE];
	int ch;
	int i;
	int count_digits[NUM_DIGITS] = {0};

	while (1) {
	
		for (i = 0; i < MAX_SIZE; i++){
			n[i] = -1;
			if (i < NUM_DIGITS){
				count_digits[i] = 0;
			}
		} i = 0;

		printf("\nEnter a number (q to quit): ");

		while (i < MAX_SIZE && (ch = getchar()) != '\n' && ch != EOF){
			if (ch == 'q' || ch == 'Q'){
				return 0;
			} else if (ch >= '0' && ch <= '9'){
				n[i] = ch - '0';	// converts ASCII to int
				i++;
			}
		}
 
		for (i = 0; n[i] != -1 && i < MAX_SIZE; i++){
			count_digits[n[i]]++;
		}
		
		printf("Digit:\t\t");
		for (i=0; i < NUM_DIGITS; i++){
			printf("%4d", i);
		}
		printf("\nOccurences:\t");

		for (i=0; i < NUM_DIGITS; i++){
			printf("%4d", count_digits[i]);
		}
		printf("\n");
	}
	return 0;
}


