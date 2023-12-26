#include<stdio.h>
int main()
{
    int n=12345;
    while(n>1000)
    {
        n=n/10;
    }
    if(n%10==3)
    {
        printf("yes");
    }
}