#include <stdio.h>
#include <stdlib.h>
void func( int *ptrx,int *ptry){
    *ptrx=10;
    *ptry=20;
}
int main()
{
    int x,y,*ptrx,*ptry;
    ptrx=&x;
    ptry=&y;
    func(ptrx,ptry);
    printf("%i \n",x);
    printf("%i \n",y);

    return 0;
}
