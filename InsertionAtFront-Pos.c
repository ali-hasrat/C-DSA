//Program to insert a node at Front and at a given position of Singly Linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void elements(int item)
{
    struct node *newnode = (struct node *)malloc (sizeof(struct node));
    newnode->data = item;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    else{
        newnode->next = head;
        head = newnode;
    }
}
void insertAtFont(int ele)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = ele;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
    }
    else{
        newnode->next = head;
        head = newnode;
    }
}
void insertAtPos(int pos,int item)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next = NULL;
    struct node *temp = head;
    while(pos>1)
    {
        temp = temp->next;
        pos--;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void display(struct node *node)
{
    while(node != NULL)
    {
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");
}
int main()
{
    elements(4);
    elements(6);
    elements(10);
    elements(9);
    elements(12);
    printf("Elements of list are : \n");
    display(head);
    insertAtFont(20);
    printf("New list after insertion at font:\n");
    display(head);
    insertAtPos(2,7);
    printf("New list after insertion at position:\n");
    display(head);

    return 0;
}
