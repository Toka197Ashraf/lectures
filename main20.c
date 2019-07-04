#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,temp,x;
    int a[]={5,4,3,2,0,1,7,6,8};
    for( int i=0;i<8;i++){
        for( int j=0;j<=(8-1);j++){
            if(*ptr<*(ptr+1)){
                temp=*ptr;
                *ptr=*(ptr+1);
                *(ptr+1)=temp;
            }
            ptr++;
            }
            ptr=a;
        }
        ptr=a;


    for(int x=0;x<=8;x++){
        printf("%i",ptr[x]);
    }
    return 0;
}
