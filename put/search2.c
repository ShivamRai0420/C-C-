#include<stdio.h>
int main()
{
    int arr[]={1,2,34,4,5};
    int search=44;
    int found=0;

    for(int i=0;i<5;i++)
    {
        if(arr[i]==search)
        {
            printf("found");
            
            break;
        }
        if(found=0)
        {
            printf("not found");
            break;
        }
    }


    return 0;
}