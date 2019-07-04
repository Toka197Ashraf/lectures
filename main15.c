#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node n1,n2,n3,n4;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n1;
    n1.next -> data=10;
    printf("%i",n2.data);
    n2.next -> next ->data=20;

    //n3.next -> next -> data=30;

    //n4.next -> next ->data=40;

    return 0;
}
