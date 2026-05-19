#include <stdio.h>

int main() {

    int magicNums[16];

    printf("Enter the numbers from 1 to 16 in any order: ");
    for (int i = 0; i < 16; i++) {
        scanf("%d", &magicNums[i]);
        }

    // printf("\n");

    // for (int i = 0; i < 16; i++) {
    //         printf("%d ", magicNums[i]);
    // }

    printf("\n");
    
    int rowA, rowB, rowC, rowD, colA, colB, colC, colD, diaA,diaB;

    // for (int i = 0; i < 4; i++){
    //     printf("%2d\t", magicNums[i]);
    //     rowA = (rowA + magicNums[i]);
    //     if (i % 4 == 0){
    //         colA = (colA + magicNums[i]);
    //     }
    //     if (i == 1 || i == 5 || i == 9 || i == 13){
    //         colB = (colB + magicNums[i]);
    //     }
    //     if (i == 2 || i == 6 || i == 10 || i == 14){
    //         colC = (colC + magicNums[i]);
    //     }
    //     if (i == 3 || i == 7 || i == 11 || i == 15){
    //         colD = (colD + magicNums[i]);
    //     }
    //     if (i % 3 == 0 && i != 0 && i != 15){
    //         diaA = (diaA + magicNums[i]);
    //     }
    //     if (i % 5 == 0){
    //         diaB = (diaB + magicNums[i]);
    //     }
    // }
    // printf("\n");

    // for (int i = 4; i < 8; i++){
    //     printf("%2d\t", magicNums[i]);\
    //     rowB = (rowB + magicNums[i]);
    //     if (i % 4 == 0){
    //         colA = (colA + magicNums[i]);
    //     }
    //     if (i == 1 || i == 5 || i == 9 || i == 13){
    //         colB = (colB + magicNums[i]);
    //     }
    //     if (i == 2 || i == 6 || i == 10 || i == 14){
    //         colC = (colC + magicNums[i]);
    //     }
    //     if (i == 3 || i == 7 || i == 11 || i == 15){
    //         colD = (colD + magicNums[i]);
    //     }
    //     if (i % 3 == 0 && i != 0 && i != 15){
    //         diaA = (diaA + magicNums[i]);
    //     }
    //     if (i % 5 == 0){
    //         diaB = (diaB + magicNums[i]);
    //     }
    // }
    // printf("\n");

    // for (int i = 8; i < 12; i++){
    //     printf("%2d\t", magicNums[i]);
    //     rowC = (rowC + magicNums[i]);
    //     if (i % 4 == 0){
    //         colA = (colA + magicNums[i]);
    //     }
    //     if (i == 1 || i == 5 || i == 9 || i == 13){
    //         colB = (colB + magicNums[i]);
    //     }
    //     if (i == 2 || i == 6 || i == 10 || i == 14){
    //         colC = (colC + magicNums[i]);
    //     }
    //     if (i == 3 || i == 7 || i == 11 || i == 15){
    //         colD = (colD + magicNums[i]);
    //     }
    //     if (i % 3 == 0 && i != 0 && i != 15){
    //         diaA = (diaA + magicNums[i]);
    //     }
    //     if (i % 5 == 0){
    //         diaB = (diaB + magicNums[i]);
    //     }
    // }
    // printf("\n");

    // for (int i = 12; i < 16; i++){
    //     printf("%2d\t", magicNums[i]);
    //     rowD = (rowD + magicNums[i]);
    //     if (i % 4 == 0){
    //         colA = (colA + magicNums[i]);
    //     }
    //     if (i == 1 || i == 5 || i == 9 || i == 13){
    //         colB = (colB + magicNums[i]);
    //     }
    //     if (i == 2 || i == 6 || i == 10 || i == 14){
    //         colC = (colC + magicNums[i]);
    //     }
    //     if (i == 3 || i == 7 || i == 11 || i == 15){
    //         colD = (colD + magicNums[i]);
    //     }
    //     if (i % 3 == 0 && i != 0 && i != 15){
    //         diaA = (diaA + magicNums[i]);
    //     }
    //     if (i % 5 == 0){
    //         diaB = (diaB + magicNums[i]);
    //     }
    // }

    // there has to be a more efficient way to do this.

    for (int i = 0; i < 16; i++){
        printf("%2d\t", magicNums[i]);

        if (i == 3 || i == 7 || i == 11 || i == 15){
            printf("\n");
        }

        if (i >= 0 && i < 4){
            rowA = (rowA + magicNums[i]);
        }

        if (i >= 4 && i < 8){
            rowB = (rowB + magicNums[i]);
        }

        if (i >= 8 && i < 12){
            rowC = (rowC + magicNums[i]);
        }

        if (i >= 12 && i < 16){
            rowD = (rowD + magicNums[i]);
        }

        if (i % 4 == 0){
            colA = (colA + magicNums[i]);
        }
        if (i == 1 || i == 5 || i == 9 || i == 13){
            colB = (colB + magicNums[i]);
        }
        if (i == 2 || i == 6 || i == 10 || i == 14){
            colC = (colC + magicNums[i]);
        }
        if (i == 3 || i == 7 || i == 11 || i == 15){
            colD = (colD + magicNums[i]);
        }
        if (i % 3 == 0 && i != 0 && i != 15){
            diaA = (diaA + magicNums[i]);
        }
        if (i % 5 == 0){
            diaB = (diaB + magicNums[i]);
        }
    }


    printf("\nRow sums: %d  %d  %d  %d\nColumn sums: %d  %d  %d  %d\nDiagonal sums: %d  %d\n", rowA, rowB, rowC, rowD, colA, colB, colC, colD, diaA, diaB);

    return 0;

}