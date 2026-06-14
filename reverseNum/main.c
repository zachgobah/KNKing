#include <stdio.h>

int main() {
	int n = 0, m = 0;

    printf("Enter a number: ");
	scanf("%d", &n);

    do {
        m = (n % 10);
        n = (n / 10);
        printf("%d", m);
    } while ( n != 0);

    printf("\n");

    return 0;

}
