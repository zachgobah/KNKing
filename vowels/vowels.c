#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char string;
    int vowels = 0;

    printf("Enter a sentence: ");

    while ((string = getchar()) != '\n'){
        switch (toupper(string)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++; break;
        }
    }

    printf("Your sentence contains %d vowels.\n", vowels);

    return 0;

}
