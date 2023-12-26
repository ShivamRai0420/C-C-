#include<stdio.h>
int main()
{
    int n;
    printf("enter no.=");
    scanf("%i",&n);

    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
     printf("sum is %i",sum);

    return 0;
}