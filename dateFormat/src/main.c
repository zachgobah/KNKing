#include <stdio.h>

int main()
{
        int month;
        int day;
        int year;
	
	// %m.pX - m = minimum field width, p = precision, X = conversion specifier
        printf("Enter a date: ");
        scanf("%d/%d/%d", &month, &day, &year);

        printf("You entered %4.4d%2.2d%2.2d\n", year, month, day);

        return 0;

}
