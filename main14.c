#include <stdio.h>
#include <stdlib.h>
struct cat
{
    int kitty;
    int semba;
    int lulu;
};
struct dog{
    int x;
    int y;
    char z;
};
int main()
{
  struct cat n;
  n.kitty=20;
 //scanf("%i",&n.kitty);
printf("%i",n.kitty);

    return 0;
}
