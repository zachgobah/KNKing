#include <stdio.h>

int main() {
	int one = 0;
	int two = 0;
	int three = 0;

	printf("Enter a three digit number: ");
	scanf("%d%d%d", &one, &two, &three);

	printf("The reversal is: %d%d%d\n", three, two, one);

	return 0;
}
