
#include<stdio.h>
#include<stdlib.h>

int linearsearch(int arr[],int size,int ele)
{
    int count=0,i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
            printf("ELEMENT FOUND AT %d index ",i);
            count++;
        }
    }
    
    if(count==0)
    printf("\nNO SUCH ELEMENT FOUND !");
}

int main()
{
    int n,i,ele;
    printf("ENTER LENGTH OF AN ARRAY YOU WANT : ");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER AN ARRAY YOU WANT : \n");
    {
       for(i=0;i<n;i++)
       {
           scanf("%d",&arr[i]);
       }
    }
    printf("\nNOW WHICH ELEMENT YOU WANT TO FIND :  ");
    scanf("%d",&ele);
    linearsearch(arr,n,ele);
    
    return 0;
}
