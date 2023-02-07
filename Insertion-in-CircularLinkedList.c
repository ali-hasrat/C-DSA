//Program to insert elements in last and at front of Circular Linked List
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insertatfont(int ele)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = ele;
    if (head == NULL)
    {
        newnode->next = newnode;
        head = newnode;
        return;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
        head = newnode;
    }
}
void insertAtlast(int ele)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = ele;
    newnode->next = newnode;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    struct node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
}
void display()
{
    struct node *temp = head;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main()
{
    insertAtlast(12);
    insertAtlast(34);
    insertAtlast(52);
    insertAtlast(32);
    printf("Circular linked list after insertion of elements at last: ");
    display();
    printf("Circular linked list after insertion of elements at Front: ");
    insertatfont(56);
    display();
    return 0;
}