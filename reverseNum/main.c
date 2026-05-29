#include <stdio.h>

int main() {
	int n;
	printf("Enter a three digit number: ");
	scanf("%d", &n);
	printf("The reversal: %d%d%d\n", n % 10, (n / 10) % 10, n / 100);

	// I couldn't figure this one out without looking up the answer so I'm not uploading it.
	return 0;

}
