#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (void)
{
    char phoneabc[20];

    printf("Enter phone number: ");
    scanf("%s", &phoneabc);

    size_t size = strlen(phoneabc);
    phoneabc[size - 1] = '\0';

    for (int i = 0; i < size - 1; i++)
    {
        phoneabc[i] = toupper(phoneabc[i]);
        if (phoneabc[i] == 'A' || phoneabc[i] == 'B' || phoneabc[i] == 'C'){
            phoneabc[i] = '2';
        } else if (phoneabc[i] == 'D' || phoneabc[i] == 'E' || phoneabc[i] == 'F'){
            phoneabc[i] = '3';
        } else if (phoneabc[i] == 'G' || phoneabc[i] == 'H' || phoneabc[i] == 'I'){
            phoneabc[i] = '4';
        } else if (phoneabc[i] == 'J' || phoneabc[i] == 'K' || phoneabc[i] == 'L'){
            phoneabc[i] = '5';
        } else if (phoneabc[i] == 'M' || phoneabc[i] == 'N' || phoneabc[i] == 'O'){
            phoneabc[i] = '6';
        } else if (phoneabc[i] == 'P' || phoneabc[i] == 'R' || phoneabc[i] == 'S'){
            phoneabc[i] = '7';
        } else if (phoneabc[i] == 'T' || phoneabc[i] == 'U' || phoneabc[i] == 'V'){
            phoneabc[i] = '8';
        } else if (phoneabc[i] == 'W' || phoneabc[i] == 'X' || phoneabc[i] == 'Y' || phoneabc[i] == 'Z'){
            phoneabc[i] = '9';
        }
    }

    printf("You entered: %s\n", phoneabc);

    return 0;

}
