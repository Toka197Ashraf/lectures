#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next_node;
}*head=NULL;
void LL_Init(void){
head=(struct node*)malloc(sizeof(struct node));
head->next_node=NULL;
printf("please enter the link list");
scanf("%i",&head->data);

}
void LL_Create_New_Node(void){
struct node *image_ptr;
image_ptr=head;
for( ; ;){
    if(image_ptr->next_node==NULL){
        break;
    }
    image_ptr=image_ptr->next_node;
}
image_ptr->next_node=(struct node*)malloc(sizeof(struct node));
image_ptr->next_node->next_node=NULL;
printf("\n please enter the data of the node");
scanf("%i",&image_ptr->next_node->data);
printf("\n");
 }
int main()
{
    LL_Init();
    printf("\n the value of the first node=%i",head->data);
    LL_Create_New_Node();
    LL_Create_New_Node();
     printf("\n the value of the second node=%i",head->next_node->data);
     printf("\n the value of the second node=%i",head->next_node->next_node->data);


    return 0;
}
