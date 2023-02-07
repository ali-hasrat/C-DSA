//Program on Stack operation using Array
#include<stdio.h>
int size=5;
int stack[5];
int top=-1;
void push(int item)
{
    if(top==size-1)
    {
        printf("Overflow");
        return;
    }
    top++;
    stack[top]=item;
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow");
    }
    top--;
}
void display(int item)
{
     if(top!=0) 
     {
      for(int i=top; i>=0; i--)
      printf("%d ",stack[i]);
     } 
     else
        printf("Stack is empty");
}
int peek()
{
    if(top==-1)
    {
        printf("Stack Underflow");
        return 0;
    }
    return (stack[top]);
}
int main()
{
    push(6);
    push(3);
    push(4);
    push(5);
     printf("Stack elements after pushing are: ");
    display(top);
    pop();
    printf("\nStack Elements after popping: ");
    display(top);
    peek();
    printf("\nPeek element is: ");
    printf("%d",stack[top]);
    return 0;
}