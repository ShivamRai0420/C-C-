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
    int found=0;

    while(start<=end)
    {
        if(a[mid]>search)               //[3,5,6,7,8,6,6]
        {                               //1,2,3,4,5,6,7
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
            found=1;
            break;
        }
        
    }
    if(found==0)
        {
            printf("not found");

        }
    
    
    return 0;
}