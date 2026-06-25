#include <stdio.h>

int main() {
    int n = 0, sq = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i * i <= n; i++){
        if (i % 2 != 0){
            continue;
        }
        printf("%d\n", i*i);
    }

    return 0;

}
