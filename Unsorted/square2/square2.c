#include <stdio.h>

int main(void)
{
    short int i, n;
    char enter = '\0';
    int c;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    while ((c = getchar()) != '\n' && c != EOF);

    for (i = 1; i <= 181; i++)
    {
        printf("%10hd%10hd\n", i, i * i);

        if (i % 24 == 0)
            {
            printf("Press ENTER to continue...");
            while ((enter = getchar()) != '\n');
        }
    }

    return 0;

}
