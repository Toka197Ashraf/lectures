#include <stdio.h>
#include <stdlib.h>
int func1(int *x ,int *y){
    *x=(*x)*4;
    *y=(*y)*(*y);
    return ((*x)+(*y));
}
 void func2( int *x,int *y){
     printf("plz enter num1=");
     scanf("%i",&*x);
      printf("plz enter num2=");
     scanf("%i",&*y);
 }
int main()
{
    int z;
    int *x,*y,ptrx,ptry;
    ptrx=&x;
    ptry=&y;
    func2(ptrx,ptry);
z=func1(ptrx,ptry);
printf("z=%i",z);
    return 0;
}
