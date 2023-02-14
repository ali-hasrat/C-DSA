//Program to implement Circular Queue using array
#include<stdio.h>
#define size 5
int CircularQueue[5];
int front=-1;
int rear=-1;
void Enqueue(int data)
{
    if((rear+1)%size==front)
    {
        printf("Overflow\n");
    }
    else if (front==-1 && rear==-1)
    {
       front=front+1;
       rear=rear+1;
       CircularQueue[front]=data;
    }
    else
    rear=(rear+1)%size;
    CircularQueue[rear]=data;
}
void Dequeue()
{
    if (front==-1 && rear==-1)
    {
        printf("UnderFlow");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    front=(front+1)%size;
}
void display()
{
    int temp=front;
    if (front==-1 && rear==-1)
    {
        printf("UnderFlow");
    }
    else
    {
        do
        {
             printf("%d ",CircularQueue[temp]);
            temp=(temp+1)%size;
        } while (temp!=(rear+1)%size);
        
    }
}
int main()
{
    printf("Circular Queue after Elements Enqueue is: \n");
    Enqueue(9);
    Enqueue(6);
    Enqueue(3);
    Enqueue(8);
    Enqueue(8);
    display();
    
    printf("\nCircular Queue after Elements Dequeue is: \n");
    Dequeue();
    display();

    printf("\nThe peek elements is: %d",CircularQueue[front]);
    return 0;
}