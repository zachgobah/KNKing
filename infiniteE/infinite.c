#include <stdio.h>

int main()
{
    int n = 0;
    float e = 1.0f, y = 1.0f;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        y = (y * i);
        float term = 1.0f / y;
        e += term;
    }

    printf("%f\n", e);

    return 0;

}
