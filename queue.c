#include <stdio.h>
#include <stdlib.h>
int size=100;
    int array[100];
    int front=-1,rear=-1;

void push(int data)
{
    if(rear==size-1)
    printf("overflow");
    else
    array[++rear]=data;
}
void pop()
{
    if(front==rear)
    printf("underflow");
    else
    printf("%d\n",array[++front]);


}
void print()
{
    int i;
    for(i=front+1;i<=rear;i++)
    {
        printf("%d\n",array[i]);
    }
}
int main()
{ 
push(5);
push(10);
pop();
push(50);
push(51);
push(52);
push(53);
push(54);
print();
}
