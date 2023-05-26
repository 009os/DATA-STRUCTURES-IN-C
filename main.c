#include<stdio.h>
#include<stdlib.h>

int binarysearch(int arr[],int size,int ele)
{
    int count=0,i,mid;
    int low=0;
    int high=size-1;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==ele)
        {
            printf("ELEMENT FOUND AT %d index ",mid);
            count++;
        }
        
        if(ele>arr[mid])
        {
            low=mid+1;
        }
        
        else
        {
            high=mid-1;
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
    binarysearch(arr,n,ele);
    
    return 0;
}

