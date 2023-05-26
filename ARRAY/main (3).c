#include<stdio.h>

void display(int arr[],int count)
{
     for(int j=0;j<count;j++)
    {
        printf("%d ",arr[j]);
    }
}

void insertion(int arr[],int in,int ele,int count)
{
    for(int j=count;j>=in;j--)
    {
            arr[j+1]=arr[j];
    }
    arr[in]=ele;
}

int main()
{
    int arr[20],i=1,j=0,count=0,ch,in,ele,temp,size;
    printf("Please enter your elements : \n");
    while(i==1)
    {
        scanf("%d",&arr[j]);
        j++;
        count++;
        
        printf("press any key otherthan 1 to stop : ");
        scanf("%d",&i);
    }
    
    size=count;
    printf("\n\t\t\tYOUR ARRAY IS : ");
    display(arr,count);   
    printf("\nDo you want to insert an element : Enter 1 for yes ");
    scanf("%d",&ch);

    if(ch==1)
    {
    printf("\nAt what index do you want to add an element : ");
    scanf("%d",&in);
    printf("\nPlease type your element : ");
    scanf("%d",&ele);
    insertion(arr,in,ele,count);
    
    printf("\n\t\t\tYOUR NEW ARRAY AFTER INSERTION IS : ");
    count++;
    display(arr,count);
    }
    
    else
    {
        printf("THANK YOU");
    }
    return 0;
}
