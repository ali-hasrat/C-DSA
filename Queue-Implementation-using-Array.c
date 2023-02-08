//Program to implement Queue using array
#include<stdio.h>
int size=6;
int Queue[6];
int front=-1;
int rear=-1;
void enqueue(int data)
{
    if(rear==size-1)
    {
        printf("Overflow");
        return;
    }
    if(rear==-1)
    {
        front=front+1;
        rear=rear+1;
        Queue[rear]=data;
        return;
    }
    rear=rear+1;
    Queue[rear]=data;
}
void dequeue()
{
    if(front==-1)
    {
        printf("Underflow");
        return;
    }
    if(front==rear)
    {
        front=rear=-1;
        return;
    }
    front++;
}
void peek()
{
    printf("\nThe peek Element of Queue: %d",Queue[front]);
}
void display()
{
    if(front==rear==-1)
    {
        printf("Empty Queue");
        return;
    }
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",Queue[i]);
    }
}
int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(7);
    printf("The Queue after Enqueue is: ");
    display();
    dequeue();
    printf("\nThe Queue after Dequeue is: ");
    display();
    peek();
    return 0;
}