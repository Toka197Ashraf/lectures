#include <stdio.h>
#include <stdlib.h>
int addition (int x,int y){
    int z;
    z=x+y;
return z;
}
int substraction (int x,int y){
     int z;
    z=x-y;
return z;
}
int multiblication (int x,int y){
     int z;
    z=x*y;
return z;
}
int division (int x,int y){
     int z;
    z=x/y;
return z;
}
int main()
{
    int x,y,z,userpick;
    printf("plz enter userpick ");
    scanf("%i",&userpick);
    printf("plz enter num1");
    scanf("%i",&x);
    printf("plz enter num2");
    scanf("%i",&y);
     if(userpick==1){
   z= addition(x,y);
     }
     else if(userpick==2){
    z= substraction(x,y);
     }
     else if(userpick==3){
      z=multiblication(x,y);
     }
     else if(userpick==4){
      z= division(x,y);
     }
       printf("the value of z=%i",z);

    return 0;
}
