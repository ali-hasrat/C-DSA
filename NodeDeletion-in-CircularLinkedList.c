//Program to delete node in Circular Linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *head = NULL;

void deleteAtFront()
{
      if(head == NULL)
    {
        printf("Deletion not possible ");
        return;
    }
    if(head->next == head)
    {
        free(head);
    }
    struct node* temp = head;
    struct node* del = head;
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = head->next;
    head = head->next;
    del->next = NULL;
    free(del);
}
void insertAtlast(int item)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
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
void deleteAtEnd()
{
    struct node *temp=head,*temp1;
    if(head==NULL)
    {
        printf("List Empty");
        return;
    }
    while(temp->next!=head)
    {
        temp1=temp;
        temp = temp->next;
    }
    temp1->next=temp->next;
    free(temp);
    return;
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
    insertAtlast(2);
    insertAtlast(4);
    insertAtlast(6);
    insertAtlast(3);
    insertAtlast(1);
    printf("Elements in Circular Linked list are: ");
    display();

    printf("Circular linked list after deletion of elements at Front: ");
    deleteAtFront();
    display();
    
    printf("Circular linked list after deletion of elements at End: ");
    deleteAtEnd();
    display();
    return 0;
}