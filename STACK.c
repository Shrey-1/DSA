#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    unsigned capacity;
    int*  array;
};
struct stack* create(unsigned cap)
{
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->capacity=cap;
    s->top=-1;
    s->array=(int*)malloc(s->capacity*sizeof(int));
    }
    void push(struct stack* s,int d)
    {
        if(s->top==s->capacity-1)
        return;
        s->array[++s->top]=d;

    }
    int pop(struct stack* s)
    {
        if(s->top==-1)
        return;
        return s->array[s->top--];
    }
    int main()
{
    struct stack* stack1 = create(100);
 
    push(stack1, 10);
    push(stack1, 20);
    push(stack1, 30);
 
    printf("%d popped from stack\n",pop(stack1));
 
    return 0;
}
