#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x=0,y=0,s;
    printf("plz enter num");
    scanf("%i",&n);
     printf("\n plz enter step");
    scanf("%i",&s);
    while(x<n)
{
    x++;
    printf("\n num=%i",x);
    y=s*x;
     printf("\n step=%i",y);
}
    return 0;
}
