#include<stdio.h>
int main()
{
    printf("welcome to binary search\n");

    int n;  
    printf("kitne no. hai=");
    scanf("%i",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
    }

 //for selection short

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

  //for searching no. in array.
    int search;
    printf("kise search krna hai");
    scanf("%i",&search);

 // B.search main program for print search element.

    int start=0;
    int end=n-1;
    int mid=(start +end)/2;

    while(start<=end)
    {
        if(a[mid]>search)
        {
            end=mid-1;
            mid=(start + end)/2;
        }
        else if(a[mid]<search)
        {
            start=mid+1;
            mid=(start+end)/2;

        }
        else if(a[mid]==search)
        {
            printf("found at %i",mid);
            break;
        }
    }
    
    return 0;
}