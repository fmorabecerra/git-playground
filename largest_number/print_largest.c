#include <stdio.h>
/* This is a comment */

int main()
{
    printf("Hello, world!\n");

    //long long unsigned int var;
    __int128 var;
    var = ~(var & 0);
    printf("Var Integer: %llu \n", var);
    printf("Var Hex: %llx \n", var);

    return 0;
}
