#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    scanf("%i",&x);
   scanf("%i",&y);
   scanf("%i",&z);
   switch(z){
case 1:
printf("%i \n",x+y);
break;
case 2:
printf("%i \n",x-y);
case 3:
printf("%i \n",x*y);
   }

    return 0;
}
