#include<stdio.h>
int main()
{
    int n;
    printf("enter array element=");
    scanf("%i",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
    }
    
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is%i",sum);

    return 0;
}
