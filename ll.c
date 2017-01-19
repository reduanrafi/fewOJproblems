
#include<stdio.h>
#include<stdlib.h>


struct node{

int data;
struct node *next;

};

void push(struct node** head_ref,int new_data)
{
    struct node *new_node=(struct node*) malloc(sizeof(struct node));

    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

void insertAfter(struct node* prev_node,int new_data)
{
    struct node *new_node=(struct node*) malloc(sizeof(struct node));
    if(prev_node==NULL)
    {
        printf("The given previous node can't be null");
        return;
    }
    new_node->data=new_data;
    new_node->next=prev_node;
    prev_node->next=new_node;
}

void appened(struct node** head_ref,int new_data){
    struct node *new_node=(struct node*) malloc(sizeof(struct node));

    struct node*last=*head_ref;
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head_ref==NULL)
    {
        *head_ref=new_node;
        return;
    }
     while(last->next!=NULL)
     {
         last=last->next;
         last->next=new_node;
         return;
     }
}
void print(struct node*node)
{
    struct node *new_node=(struct node*) malloc(sizeof(struct node));
    while(node!=NULL)
    {
        printf("%d\n",node->data);
        node=node->next;
    }
}


int main()
{
    struct node* head= NULL;
    appened(&head,1);
    push (&head,1);
    appened(&head,2);
    push (&head,2);
    print(head);
    print(head->next);
    getchar();
}
