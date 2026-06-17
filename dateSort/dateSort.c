#include <stdio.h>

int main(){
    int day = 0, month = 0, year = 0, new_day = 0, new_month = 0, new_year = 0;

    while(1){
        new_day = 0;
        new_month = 0;
        new_year = 0;

        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &new_month, &new_day, &new_year);

        if (new_day == 0 || new_month == 0 || new_year == 0){
            break;
        }

        else if (year == 0){
            year = new_year;
            month = new_month;
            day = new_day;
        }

        else if (new_year < year){
            year = new_year;
            month = new_month;
            day = new_day;
        } else if (new_month < month){
            year = new_year;
            month = new_month;
            day = new_day;
        } else if (new_day <= day){
            year = new_year;
            month = new_month;
            day = new_day;
        }

    }

    printf("%d/%d/%d is the earliest date.\n", month, day, year);

    return 0;

}
