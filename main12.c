#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    char y;
    short z;
    int *ptrx;
    char *ptry;
    short *ptrz;
    ptrx=&x;
    ptry=&y;
    ptrz=&z;
    *ptrx=10;
    *ptry='A';
    *ptrz=0;
    printf("%i \n",x);
    printf("%c \n",y);
    printf("%i \n",z);

    return 0;
}
