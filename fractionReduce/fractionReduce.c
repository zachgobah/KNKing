#include <stdio.h>

int main() {

    int numerator = 0, denominator = 0, gcd = 0, m = 0, n = 0, holding = 0;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

        // temporary variables so we can hold on to the original values:
        m = numerator;
        n = denominator;

    while(1){
        if (n == 0){
            gcd = m;
            break;
        }

        holding = ( m % n);
        m = n;
        n = holding;

    }

    numerator = (numerator / gcd);
    denominator = (denominator / gcd);

    printf("In lowest terms: %d/%d\n", numerator, denominator);

    return 0;

}
