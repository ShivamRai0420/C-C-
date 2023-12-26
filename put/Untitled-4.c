#include<stdio.h>
int main()
{
    
    int arr[]= {1,7,3,8,5};
    int max=0;
    int sec=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>arr[max])
        {
            max=i;
        }
    }
    
    for(int i=0;i<5;i++)
    {
        if(arr[i]>arr[sec] && i!=max)
        {
            sec=i;
        }
    }
    printf(" \n%i ", arr[sec]);

    return 0;
}    