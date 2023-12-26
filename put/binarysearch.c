#include<stdio.h>
int main()
{
    printf("welcome to binary search:\n");
    int n;
     printf("kitne number hai:");
     scanf("%i",&n);
     int a[n];

     for(int i=0;i<n;i++)
     {
         scanf("%i",&a[i]);
     }

     // apply shorting if arr if it is not sorted

     for(int i=0;i<n-1;i++)
     {
         for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
     }
         for(int i=0;i<n;i++)
         {
             printf("%i ",a[i]);
         }
         int search;
         printf("\n kisse search krna hai:");
         scanf("%i",&search);

         // binary search main function

         int start=0;
         int end=n-1;
         int mid=(start+end)/2;

         while (start<=end)
         {
              if(a[mid]>search)
              {
                  end=mid-1;
                  mid=(start+end)/2;
              }

              else if(a[mid]<search)
              {
                  start=mid+1;
                  mid=(start+end)/2;
              }

              else if(a[mid]==search)
              {
                  printf("Found at %i",mid);
                  break;
              }


         }
    return 0;
}