#include<stdio.h>

void display(int arr[],int count)
{
     for(int j=0;j<count;j++)
    {
        printf("%d ",arr[j]);
    }
}

void deletion(int arr[],int in,int count)
{
    for(int j=in;j<count;j++)
    {
            arr[j]=arr[j+1];
    }
    
}

int main()
{
    int arr[20],i=1,j=0,count=0,ch,in,temp,size;
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
    printf("\nDo you want to delete an element : Enter 1 for yes ");
    scanf("%d",&ch);

    if(ch==1)
    {

    printf("\nAt what index do you want to delete an element : ");
    scanf("%d",&in);
    deletion(arr,in,count);
    
    printf("\n\t\t\tYOUR NEW ARRAY AFTER DELETION IS : ");
    count=count-1;
    display(arr,count);
    }
    
    else
    {
        printf("THANK YOU");
    }
    return 0;
}

