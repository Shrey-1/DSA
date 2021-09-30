#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;

};
void push (struct node** head ,int d)
{ struct node* new1 = (struct node*) malloc(sizeof(struct node ));
    new1->data=d;
    if (*head==NULL)
    { new1->prev=NULL;
        *head=new1;
        
    return;
    }
    struct node* last=*head;
    while(last!=NULL)
    {
        last=last->next;
    }
    last->next=new1;
    new1->prev=last;

}
void pushstart (struct node** head,int d)
{
    struct node* new1=(struct node*) malloc(sizeof(struct node ));
    new1->data=d;
    new1->prev=NULL;
    new1->next=*head;
    (*head)->prev=new1;
    *head=new1;
    return;

}
void delete(struct node** head,int f)
{struct node* new1=*head;
struct node* temp=*head;


if((*head)->data==f && *head!=NULL)
{
    *head=(*head)->next;
    (*head)->prev=NULL;
    return;
}
while ((*head)->next!=NULL)
{new1=new1->next;
if(new1->data=f)
{
    temp->next=new1->next;
    new1=new1->next;
    new1->prev=temp;
    return;
}temp=temp->next;

}

}
int main()
{
    /* Start with the empty list */
    struct node* head = NULL;
 
    /* Let us create the doubly linked list 10<->8<->4<->2 */
    push(&head, 2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);
 
  
   
 
    /* delete nodes from the doubly linked list */
    delete(&head,2); /*delete first node*/
     /*delete last node*/
 
    /* Modified linked list will be NULL<-8->NULL */
    printf("\n Modified Linked list ");
 
   
}
