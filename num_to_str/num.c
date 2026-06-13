#include <stdio.h>

int main(){

    int num = 0;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    if(num > 99 || num < 1){
        printf("INVALID NUMBER\n");
        return 0;
    }

    int first = (num / 10);
    int second = (num % 10);

    switch (first){
        case 0:
            printf("You entered the number ");
            break;
        case 1:
            printf("You entered the number ");
                switch (second){
                    case 0:
                        printf("ten.\n");
                        return 0;
                    case 1:
                        printf("eleven.\n");
                        return 0;
                    case 2:
                        printf("twelve.\n");
                        return 0;
                    case 3:
                        printf("thirteen.\n");
                        return 0;
                    case 4:
                        printf("fourteen.\n");
                        return 0;
                    case 5:
                        printf("fifteen.\n");
                        return 0;
                    case 6:
                        printf("sixteen.\n");
                        return 0;
                    case 7:
                        printf("seventeen.\n");
                        return 0;
                    case 8:
                        printf("eighteen.\n");
                        return 0;
                    case 9:
                        printf("nineteen.\n");
                        return 0;
            } break;

        case 2:
            printf("You entered the number twenty");
            break;
        case 3:
            printf("You entered the number thirty");
            break;
        case 4:
            printf("You entered the number forty");
            break;
        case 5:
            printf("You entered the number fifty");
            break;
        case 6:
            printf("You entered the number sixty");
            break;
        case 7:
            printf("You entered the number seventy");
            break;
        case 8:
            printf("You entered the number eighty");
            break;
        case 9:
            printf("You entered the number ninety");
            break;
    }


        if (first > 0 && second > 0){
            printf("-");
        }

    switch (second){
        case 0:
            printf(".\n");
            break;
        case 1:
            printf("one.\n");
            break;
        case 2:
            printf("two.\n");
            break;
        case 3:
            printf("three.\n");
            break;
        case 4:
            printf("four.\n");
            break;
        case 5:
            printf("five.\n");
            break;
        case 6:
            printf("six.\n");
            break;
        case 7:
            printf("seven.\n");
            break;
        case 8:
            printf("eight.\n");
            break;
        case 9:
            printf("nine.\n");
            break;
    }

    return 0;

}
