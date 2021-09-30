#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

};
  void push (struct node** head ,int data1)
{ struct node* new1 = (struct node*) malloc(sizeof(struct node ));

struct node* last=*head;
new1->data =data1 ; 
new1->next=NULL;
    if(*head==NULL )
    {*head=new1;
    return;}
    else
    {
        while(last->next=NULL)
        last=last->next;
        last->next=new1;
        return;

    }
}
void pushatstart(struct node** head,int d)
{struct node* new1=(struct node*) malloc(sizeof(struct node));
new1->data=d;
new1->next = *head;
*head=new1;
return;

}
void delete(struct node** head, int f)
{struct node* new1 =*head;
struct node* temp =*head;
if (new1!=NULL&&new1->data==f)
{
    *head=new1->next;
}

while (new1->next!=NULL)
{ new1=new1->next;
if(new1->data==f)
{
    temp->next=new1->next;
    return;
}temp=temp->next;
    
}

}

int main()
{
    /* Start with the empty list */
    struct node* head = NULL;
 
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
 
    puts("Created Linked List: ");
  
    delete(&head, 1);
    puts("\nLinked List after Deletion of 1: ");
    
    return 0;
}
