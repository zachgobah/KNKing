#include <stdio.h>

int main()
{
    float n = 0.0f, e = 1.0f, y = 1.0f;

    printf("Enter an small floating point number: ");
    scanf("%f", &n);

    for (int i = 1; ; i++){
        y = (y * i);
        float term = 1.0f / y;
        if (term < n){
            break;
        }
        e += term;
    }

    printf("%f\n", e);

    return 0;

}
