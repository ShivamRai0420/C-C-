#include<stdio.h>
int main()
{
        int arr[]={1,2,32,3,2};
        int temp;
        for(int i=0;i<6;i++)
        {
          for(int j=0;i<6;j++)
            {
                 if(arr[0]>arr[j+1])
                 {
                   temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;  
                 }
            }
        }

        for(int i=0;i<6;i++)
        {
            printf("%i",arr[i]);
        }
        return 0;
}