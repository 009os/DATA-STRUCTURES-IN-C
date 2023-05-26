#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main()
{
    struct Node *head,*p,*prev;
    int n;
    
    head=NULL;
    
    printf("ENTER NUMBER OF ELEMENTS IN LINKED-LIST YOU WANT : ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        struct Node*p=(struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&p->data);
        
        p->next=NULL;
        if(head==NULL)
        head=p;
        
        else
        prev->next=p;
        prev=p;
    }
    return 0;
}


