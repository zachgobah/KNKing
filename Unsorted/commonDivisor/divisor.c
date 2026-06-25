#include <stdio.h>

int main() {
    int m = 0, n = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while(1){
        if (n == 0){
            printf("Greatest common divisor: %d\n", m);
            return 0;
        }

        int holding = 0;

        holding = (m % n);

        m = n;

        n = holding;

    }

    return 0;

}
