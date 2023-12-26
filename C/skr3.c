#include<stdio.h>
int main()
{
    int prv=7;
    printf("%i+",prv);
    for(int i=2;i<5;i++)
    {
        prv=prv*10+7;
        printf("%i+",prv);
    }
    return 0;
}