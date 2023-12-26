#include<stdio.h>
int main()
{
    
    int arr[]= {1,2,3,4,5,56,6,6,117,7};
    int max=arr();
    for(int i=0;i<8;i++)
    {
        if(arr[max]<arr[i]){
            max=i;
        }
    }
    printf(" \n%i ", arr[max]);

    return 0;
}    