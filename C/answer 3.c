#include<stdio.h>
int main()
{
    int n;
    printf("enter a no.=");
    scanf("%i",&n);

    int rem,rev=0;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%i",rev);

    return 0;
}