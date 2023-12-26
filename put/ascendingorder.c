#include<stdio.h>
int main()
{
    int arr[]={33,14,51,60,27,18,19};
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(arr[j]>arr[j+1])
            {
            // int temp=arr[j];
            // arr[j]=arr[j+1];
            // arr[j+1]=temp;
            swap(arr[j],arr[j+1]);
            }
        }
    }
        for(int i=0;i<7;i++)
        {
            printf("%i  ",arr[i]);
        }
    
   return 0;
}