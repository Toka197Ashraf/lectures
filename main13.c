#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
int *ptr1,**ptr2,***ptr3;
ptr1=&x;
ptr2=& ptr1;
ptr3=& ptr2;
*ptr1=10;
**ptr2=20;
***ptr3=30;
printf("%p \n",x);//value of x in hexa
printf("the adress of x using ptr1=%p \n",ptr1);
printf(" the adress of x using ptr2=%p \n",*ptr2);
printf(" the adress of x using ptr3=%p \n",**ptr3);

printf(" the adress of ptr1 using ptr2=%p \n",ptr2);
printf(" the adress of ptr1 using ptr3=%p \n",*ptr3);

printf("the adress of ptr2 using ptr3= %p \n",ptr3);

    return 0;
}
