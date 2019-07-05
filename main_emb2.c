#include <stdio.h>
#include <stdlib.h>
#define clr_bit(register,position) (register&~(1<<position))
int main()
{
    int x=0x0A;
    x=clr_bit(x,1);
    printf("%i",x);
    return 0;
}
