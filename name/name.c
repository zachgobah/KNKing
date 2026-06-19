#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char first[64], last[64];

    printf("Enter first and last name: ");
    scanf("%s %s", &first, &last);

    first[0] = toupper(first[0]);
    last[0] = toupper(last[0]);

    printf("%s, %c\n", last, first[0]);

    return 0;

}
