#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void display(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
        
    }
}

struct Node* insertatfirst(struct Node* head,int data)
{
    struct Node*ptr= (struct Node*)malloc(sizeof(struct Node));
    
    ptr->next=head;
    ptr->data=data;
    
    return ptr;
}

struct Node* atindex(struct Node*head,int data,int index)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
    
    return head;
    
}

struct Node* attheend(struct Node*head,int data)
{
	struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	
	struct Node*p=head;
	
	while(p->next!=NULL)
	{
		p=p->next;
	}
ptr->next=NULL;
p->next=ptr;

return head;	
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    display(head);
    head = insertatfirst(head,4);
    head = atindex(head,45, 2);
    head = attheend(head,2345);
    printf("\nLinked list after insertion\n");
    display(head);

    
    return 0;
}




