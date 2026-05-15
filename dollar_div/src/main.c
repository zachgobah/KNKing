#include <stdio.h>

struct dollarAmt{
    int twenties;
    int tens;
    int fives;
    int georgies;
};

 void calculate(int x, int *twenties, int *tens, int *fives, int *georgies){
    int remainder;
    
    *twenties = x / 20;
     x = x % 20;

     *tens = x / 10;
     x = x % 10;

     *fives = x / 5;
     x = x % 5;

     *georgies = x / 1;
     x = x % 1;
 };

int main()
{
    struct dollarAmt userAmt;
    
    int dollarInput;

    printf("Enter dollar amount: ");
    scanf("%d", &dollarInput);

    calculate(dollarInput, &userAmt.twenties, &userAmt.tens, &userAmt.fives, &userAmt.georgies);

    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1: %d\n", userAmt.twenties, userAmt.tens, userAmt.fives, userAmt.georgies);

}