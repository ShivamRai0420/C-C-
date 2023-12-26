#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter no.=");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("prime no.");
    }
    else{
        printf("not prime no.");
    }
    return 0;
}