#include <stdio.h>

int main(void)
{
	while(1){
		long double num = 0.0L;
		long double fact = 1.0L; 

		printf("Enter a positive integer: ");
		scanf("%Lf", &num);

		if (num == 0){
			break;
		} else {
			for (int i = 2; i <= num; i++){
				fact = (i * fact);
			}

			printf("Factorial of %.Lf: %.2Lg\n", num, fact);
		}

	}

	return 0;

}
