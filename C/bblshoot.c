#include<stdio.h>
int main()   
{
    int arr[]={1,2,43,34,35,75,6,74,4};
    for(int i=0;i<9;i++)
    {
        int temp;
        for(int j=0;j<9;j++)
        if(arr[i]<arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
             arr[j]=temp;
        }
    }
        for(int i=0;i<9;i++)
        {
            printf("%i  ",arr[i]);
        }
    
    return 0;
}