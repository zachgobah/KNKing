#include <stdio.h>

int main() {

    int numer_one = 0, denom_one = 0, numer_two = 0, denom_two = 0, numer_result = 0, denom_result = 0;

    printf("Enter two fractions seperated by a plus sign: ");
    scanf("%d/%d+%d/%d", &numer_one, &denom_one, &numer_two, &denom_two);

    numer_result = (numer_one * denom_two) + (numer_two * denom_one);
    denom_result = denom_one * denom_two;

    printf("The sum is %d/%d\n", numer_result, denom_result);

    return 0;
}