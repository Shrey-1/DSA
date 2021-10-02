#include <stdlib.h>
#include <stdio.h>

struct node 
{
    int data;
    struct node* next;
};

void traversal(struct node** head)
{
    struct node* temp=*head;
    while (temp!=NULL)
    {
        printf("%d",&temp->data);
        temp=temp->next;
        if(temp==*head)
        return;
    }
}
void push(struct node** head,int d)
{
    struct node* temp=*head;
    struct node* new1=(struct node*)malloc(sizeof(struct node));
    new1->data=d;
    if (temp==NULL)
    {
        temp=new1;
        temp->next=temp;
        return;
    }
    while(temp->next!=*head)
    {
        temp=temp->next;
    }
    new1->next=*head;
    temp->next=new1;
}
void pushstart(struct node** head,int d)
{struct node* new1=(struct node*)malloc(sizeof(struct node));
new1->data=d;
new1->next=*head;
 struct node* temp=*head;
 while((temp->next)!=*head)
 temp=temp->next;
 temp->next=new1;

}
void deleteNode(struct Node* head, int key)
{
    if (head == NULL)
        return;
    struct node *curr = head, *prev;
    while ((curr->data) != key)
    {
        if (curr->next == head)
        {
            printf("\nGiven node is not found"
                   " in the list!!!");
            break;
        }
 
        prev = curr;
        curr = curr->next;
    }

    if (curr->next == head)
    {
        head = NULL;
        free(curr);
        return;
    }
    if (curr == head)
    {
        prev = head;
        while (prev->next != head)
            prev = prev->next;
        head = curr->next;
        prev->next = head;
        free(curr);
    }
    else if (curr->next == head && curr == head)
    {
        prev->next = head;
        free(curr);
    }
    else
    {
        prev->next = curr->next;
        free(curr);
    }
}
int main()
{
    /* Initialize lists as empty */
    struct node* head = NULL;
 
    /* Created linked list will be 2->5->7->8->10 */
    push(&head, 2);
    push(&head, 5);
    push(&head, 7);
    push(&head, 8);
    push(&head, 10);
 
    printf("List Before Deletion: ");
   
 
    deleteNode(head, 7);
 
    printf("List After Deletion: ");
    
 
    return 0;
}

