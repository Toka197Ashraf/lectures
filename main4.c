#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pickup;
    int x=6,y=3,z;
    printf("for + press up 1 \n");
 printf("for + press up 2 \n");

  printf("for + press up 3\n");
   printf("for + press up 4 \n");
   scanf("%i",&pickup);
   if(pickup ==1)
{
    z=x+y;
}
else if(pickup ==2)
{
    z=x-y;
}
else if(pickup ==3)
{
    z=x*y;
}
else if(pickup ==4)
{
    z=x/y;
}
printf("the value of z=%i",z);



    return 0;
}
