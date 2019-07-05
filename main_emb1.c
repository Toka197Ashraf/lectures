#include <stdio.h>
#include <stdlib.h>
#define set_bit(register,position) (register |(1<<position))
int main()
{
int x=0x0A;
x=set_bit(x,2);
printf("%i",x);
    return 0;
}
