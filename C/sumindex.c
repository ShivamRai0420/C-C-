#include<stdio.h>
int main()
{
    
    int arr[]= {1,7,6,8,5};
    int sum=7;
    int found=0;
    for(int i=0;i<=4;i++)
    {
         for(int j=i+1;j<=5;j++)
         {
             if(arr[i] + arr[j]==sum)
             {
                printf(" \n%i%i ",i,j);
                found=1;
                break;

             }
         } 
         if(found==1)
    {
        break;
    }   
    }
    



    return 0;
}    