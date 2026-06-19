#include <stdio.h>
#include <ctype.h>

int main(void)
{
    /*  1: AEILNORSTU
        2: DG
        3: BCMP
        4: FHVWY
        5: K
        8: JX
        10: QZ

        Sum value of word by computing value of letters */

    char word[32];
    int value;

    printf("Enter a word: ");
    scanf("%s", &word);

    for (int i = 0; i < sizeof(word); i++){
        word[i] = toupper(word[i]);

        switch (word[i]) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                value += 1;
                break;
            case 'D': case 'G':
                value += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                value += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                value += 4;
                break;
            case 'K':
                value += 5;
                break;
            case 'J': case 'X':
                value += 8;
                break;
            case 'Q': case 'Z':
                value += 10;
                break;
        }
    }

    printf("Scrabble value: %d\n", value);

    return 0;

}
