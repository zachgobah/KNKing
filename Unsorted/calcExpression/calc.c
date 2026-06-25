#include <stdio.h>

int main(void) {
    float total = 0.0f, new_num = 0.0f;
    char operator;

    printf("Enter an expression: ");
    scanf("%f", &total);

    while ((operator = getchar()) != '\n') {
        if (operator == ' '){
            continue;
        }

        scanf("%f", &new_num);

        switch(operator){
            case '+':
                total += new_num;
                break;
            case '-':
                total -= new_num;
                break;
            case '*':
                total *= new_num;
                break;
            case '/':
                total /= new_num;
                break;
            default:
                break;
        }
    }

    printf("Value of expression: %.1f\n", total);

    return 0;
}