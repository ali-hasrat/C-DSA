//Program to implement Stack using Linked List
#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack* link;
};
void push(struct stack**top,int item)
{
    struct stack* newnode=(struct stack*)malloc(sizeof(struct stack));
    newnode->data=item;
    newnode->link=*top;
    *top=newnode;
}
void pop(struct stack**top)
{
    if(*top==NULL)
    {
        printf("UnderFlow");
        return;
    }
    struct stack *temp=*top;
    *top=(*top)->link;
    temp->link=NULL;
    free(temp);
    temp=NULL;
}
void peek(struct stack**top)
{
   if(*top==NULL)
    {
        printf("UnderFlow");
        return;
    }
    printf("\nThe peek element od Stack is: %d",(*top)->data); 
}
void display(struct stack**top)
{
    struct stack*temp=*top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
int main()
{
    struct stack* top=NULL;
    push(&top,10);
    push(&top,4);
    push(&top,7);
    push(&top,2);
    printf("Stack after pushing: ");
    display(&top);

    pop(&top);
    printf("\nStack after popping: ");
    display(&top);

    peek(&top);
    return 0;
}