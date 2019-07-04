#include <stdio.h>
#include <stdlib.h>
#define add(x,y) (x+y)
#define sub(x,y) (x-y)
#define mul(x,y) (x*y)
 int addition(int x, int y){
    return add(x,y);
    }
 int substraction(int x, int y){
    return sub(x,y);
    }


int main()
{
    int x,y;
    scanf("%i",&x);
    scanf("%i",&y);
    printf("%i",add(x,y));
    printf("%i",sub(x,y));
    return 0;
}
