#include <stdio.h>
#include <stdlib.h>
#define assign_bit(register,position,assigned) (register&~(1<<position)|register|(assigned<<position))
int main()
{
    int x=0x0A;
    x = assign_bit(x,1,0);
    printf("%i",x);
    return 0;
}
