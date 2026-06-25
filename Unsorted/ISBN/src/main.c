#include <stdio.h>

int main(){
    int gs1, group, publisher, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &item, &check);

    printf("GS1: %d\nGroup: %d\nPublisher: %d\nItem: %d\nCheck: %d\n", gs1, group, publisher, item, check);


    return 0;
}
