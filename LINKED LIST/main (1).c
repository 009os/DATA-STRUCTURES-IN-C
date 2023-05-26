#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        printf("ELEMENT : %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct Node* deletefirst(struct Node* head)
{
    struct Node* ptr = head;
    head = head->next;
    free(ptr);
    
    return head;
}

struct Node* deleteatindex(struct Node* head,int index)
{
    struct Node* p = head;
    struct Node* q = head->next;
    
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    
    return head;
}

struct Node* tillele(struct Node* head,int value)
{
    struct Node* p = head;
    struct Node* q = head->next;
    
    while(q->data!=value&&q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
    p->next=q->next;
    free(q);
    }
    return head;
}

struct Node* deleteend(struct Node* head)
{
    struct Node*p=head;
    struct Node*q=head->next;
    
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    
    p->next=NULL;
    free(q);
    return head;
    
}

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    
    head->data=7;
    head->next=second;
    
    second->data=11;
    second->next=third;
    
    third->data=66;
    third->next=fourth;
    
    fourth->data=45;
    fourth->next=NULL;
    
    printf("L-L BEFORE INSERTION : \n");
    traversal(head);
    printf("\nL-L AFTER INSERTION : \n");
    head=deleteatindex(head,2);
    head=deletefirst(head);
    head=deleteend(head);
    head=tillele(head,11);
    traversal(head);
    
    return 0;
    
}





