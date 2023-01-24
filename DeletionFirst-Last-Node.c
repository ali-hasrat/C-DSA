//program to delete last node and first node of given Linked List
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
void deletionAtFont()
{
    struct node *temp = head;
    head = head->next ;
    temp->next = NULL;
    free(temp);
}
void deleteAtEnd()
{
    struct node *temp1 = head;
    struct node *temp2 = NULL;
    while(temp1->next != NULL){
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = NULL;
    free(temp1);
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
    printf("New list after deletion at font:\n");
    deletionAtFont();
    display(head);
    printf("New list after deletion at end :\n");
    deleteAtEnd();
    display(head);
    return 0;
}