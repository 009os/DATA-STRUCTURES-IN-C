#include<stdio.h>
int main()
{
    int arr[20],i=1,j=0,count=0,ch,in,ele,temp;
    printf("Please enter your elements : \n");
    while(i==1)
    {
        scanf("%d",&arr[j]);
        j++;
        count++;
        
        printf("press any key otherthan 1 to stop : ");
        scanf("%d",&i);
    }
    printf("\n\t\t\tYOUR ARRAY IS : ");
    for(j=0;j<count;j++)
    {
        printf("%d ",arr[j]);
    }
    printf("\nDo you want to insert an element : Enter 1 for yes ");
    scanf("%d",&ch);
    printf("\nAt what index do you want to add an element : ");
    scanf("%d",&in);
    printf("\nPlease type your element : ");
    scanf("%d",&ele);
    for(j=count;j>=in;j--)
    {
            arr[j+1]=arr[j];
    }
    arr[in]=ele;
   printf("\n\t\t\tYOUR NEW ARRAY AFTER INSERTION IS : ");
    for(j=0;j<=count;j++)
    {
        printf("%d ",arr[j]);
    }
}

