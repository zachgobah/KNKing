#include <stdio.h>

int main(){

    int area, local, number;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &local, &number);

    printf("You entered %d.%d.%d\n", area, local, number);

    return 0;
    
}