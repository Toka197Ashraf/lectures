#include <stdio.h>
#include <stdlib.h>
enum array_State{unsorted,duringsorting,sorted}a_s;
int main()
{

    int *sorter,temp;
    int d[]={7,8,6,5,4,3,1,2};
    a_s=unsorted;
    if(a_s==0){
        printf("\n array is un sorted");
    }
    printf("\n");
    for(int i=0;i<8-1;i++){
        for(int j=0;j<=8-2;j++)
        {
            if(*sorter>*(sorter+1)){
                temp=*sorter;
                *sorter=*(sorter+1);
                *(sorter+1)=temp;
            }
            sorter++;

        }

        sorter=d;
        for(int m=0;m<8;m++){
             printf("%i",sorter[m]);
         }
         printf("\n");
         a_s=duringsorting;
         if(a_s==1){
            printf(" \t array is still sorting ");
            }
            printf("\n");
    }
    printf("\n");
    a_s=sorted;
    if(a_s==2)
    {
        printf(" array is successfully sorted");
        printf("\n");
    }

    sorter=d;
    for(int x=0;x<8;x++){
        printf("%i",sorter[x]);
    }

    return 0;
}
