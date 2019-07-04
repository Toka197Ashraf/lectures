#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],*ptr;
    ptr=a;
    for(int i=0;i<10;i++){
            scanf("%i",&ptr);

    ptr++;
    }
        ptr=a;
        for ( int i=0;i<10;i++){
                ptr[i]=i;
            printf("%i \n",ptr[i]);
        }

    return 0;
}
