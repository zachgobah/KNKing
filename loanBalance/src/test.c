#include <stdio.h>

void testFun(int i, int x, int z)
{
    printf("%d, %d, %d", i, x, z);
}

int main(){

    int fuck = 9;
    int you = 8;
    int test = 44;

    testFun(fuck, you, test);
    return 0;
}