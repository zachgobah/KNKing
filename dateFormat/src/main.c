#include <stdio.h>

int main()
{
        int month;
        int day;
        int year;
	
	// %m.pX - m = minimum field width, p = precision, X = conversion specifier
        printf("Enter a date: ");
        scanf("%d/%d/%d", &month, &day, &year);

        printf("You entered %04d%02d%02d\n", year, month, day);

        return 0;

}
