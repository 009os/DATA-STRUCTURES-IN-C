#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    return 0;
}

int isfull(struct stack*ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    
    else
    return 0;
}

void push(struct stack*ptr, int val)
{
    if(isfull(ptr))
    {
        printf("Stack Overflow ");
    }
    
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop(struct stack*ptr)
{
    if(isempty(ptr))
    {
        printf("Stack Underflow ");
        return -1;
    }
    
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main()
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    int i=0,ele,ch,j;
    printf("CONGO ! ARRAY CREATED .....\n");
    printf("Before pushing, Full: %d\n", isfull(sp));
    printf("Before pushing, Empty: %d\n", isempty(sp));
    
while(i<sp->size)
{
    printf("ENTER YOUR ELEMENT : ");
    scanf("%d",&ele);
    push(sp,ele);
    i++;
}
    printf("\nAfter pushing, Full: %d\n", isfull(sp));
    printf("After pushing, Empty: %d\n", isempty(sp));
    
    printf("\nWANNA POP ELEMENT ? HOW MANY ELEMENT YOU WANT TO POP ? \n");
    scanf("%d",&ch);
    
    for(j=0;j<ch;j++)
    {
        printf("POPED ELEMENT IS : %d\n",pop(sp));
    }
    
    
    return 0;
    
}   
