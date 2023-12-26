#include<stdio.h>
int main()
{
    int n=12345;
    for (int i=1;i<3;i++)
    {
        n=n/10;
    }
    if(n%10==3)
    {
        printf("yes");
    }
}