#include <stdio.h>

int main(){
    float number = 0.0f;
    float buffer = 0.0f;

    while(1){
        printf("Enter a number: ");
        scanf("%f", &buffer);

        if (buffer <= 0){
            printf("The largest number entered was %.2f\n", number);
            return 0;
        }

        if (buffer > number){
            number = buffer;
        }

    }

    return 0;
}
