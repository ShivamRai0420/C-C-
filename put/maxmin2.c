#include<stdio.h>
int main()
{
    int a[]={1,2,7,4,5};
    int max=0,min=0;

    for(int i=0;i<5;i++)
    {
        if(a[max]<a[i])
        {
            max=i;
        }
    }
    printf("%i ",a[max]);

    
    for(int i=0;i<5;i++)
    {
        if(a[min]>a[i])
        {
            min=i;
        }
    }
    printf("%i",a[min]);
    return 0;
}