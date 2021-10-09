#include <stdio.h>
#include <stdlib.h>
int size=100;
    int array[100];
    int front=-1,rear=-1;

void pushrear(int data)
{
    if(rear==size-1)
    printf("overflow");
    else
    array[++rear]=data;
}
void pushfront(int data)
{if(front==-1)
  printf("overflow");
 else 
 array[front--]=data;

    
}
void popfront()
{
    if(front==rear)
    printf("underflow");
    else
    printf("%d\n",array[++front]);


}
void poprear()
{
    if(rear==-1||rear<=front)
    printf("underflow");
    else
   printf("%d\n",array[rear--]);

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
pushrear(5);
pushrear(10);
popfront();
pushfront(50);
pushrear(51);
pushrear(52);
pushrear(53);
pushrear(54);
print();
}
