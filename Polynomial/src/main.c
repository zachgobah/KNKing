#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calcPoly(double x)
{
	return ((3.0f * (x * x * x * x * x)) + (2.0f * (x * x * x * x)) - (5.0f * (x * x * x)) - (x * x) + (7.0f * x) - 6.0f );
};

double calcPolyHorner(double x)
{
	return ((((((3.0 * x) + 2.0f) * x - 5.0f) * x - 1.0f) * x + 7.0f) * x - 6.0f);
};

int main()
{
	double userInput;

	do {
		printf("Enter a number (0 to exit): ");
		scanf("%lf", &userInput);
		if (userInput != 0) {
			printf("Polynomial: %.02lf\n", calcPolyHorner(userInput));
		}
	} while (userInput != 0);
	
	return 0;
}