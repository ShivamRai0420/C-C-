#include<stdio.h>
int main()
{
    int a[]={-1,2,-3,6,6,7,5};
    int sum=0;
    for(int i=0;i<7;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is %i",sum);

    return 0;
}