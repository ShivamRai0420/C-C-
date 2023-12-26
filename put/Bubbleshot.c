#include<stdio.h>
int main()
{
    int arr[]={3,5,1,58,41,3};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=len;i>=0;i--)
    {
       for(int j=len;j>=0;j--)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        } 
    }
    for(int i=len-1;i>=0;i--)
    {
        printf("%i ",arr[i]);
    }

    return 0;
}