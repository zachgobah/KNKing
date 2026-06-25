#include <stdio.h>

int main(){

    int month = 0, day = 0, year = 0, month_two = 0, day_two = 0, year_two = 0;

    printf("Enter first date: ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Enter second date: ");
    scanf("%d/%d/%d", &month_two, &day_two, &year_two);

    if (year_two > year){
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month, day, year, month_two, day_two, year_two);
    } else if (year_two < year){
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month_two, day_two, year_two, month, day, year);
    } else {
        if (month_two > month){
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month, day, year, month_two, day_two, year_two);
        } else if (month_two < month){
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month_two, day_two, year_two, month, day, year);
        } else {
            if (day_two > day){
                printf("%d/%d/%d is earlier than %d/%d/%d\n", month, day, year, month_two, day_two, year_two);
            } else if (day_two < day){
                printf("%d/%d/%d is earlier than %d/%d/%d\n", month_two, day_two, year_two, month, day, year);
            } else {
                printf("These dates are the same day!\n");
            }
        }
    }

    return 0;

}

