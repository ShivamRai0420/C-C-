#include<stdio.h>
int main()
{
    int a,b;
    int temp;
    printf(" enter two number:");
    scanf("%i%i",&a,&b);

    temp=a;
    a=b;
    b=temp;
    printf(" a=%i  b=%i ",a,b);
    return 0;
}