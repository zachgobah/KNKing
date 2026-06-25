#include <stdio.h>

int main(){
    int days = 0, starting = 0;

    printf("Enter number of days in a month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1 = Sun, 7 = Sat): ");
    scanf("%d", &starting);

    printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");

    for (int i = 1, j = 1; i <= days; j++){
        if (starting >= j){
            printf("   \t");
            // continue;
        } else {
            printf("%-3d\t", i);
            i++;
        }
        if ( j % 7 == 1){
            printf("\n");
        }
    }

    printf("\n");

    return 0;

}
