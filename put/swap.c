#include<stdio.h>
int main()
{
    int a,b;
    int temp;
    printf(" enter number a=");
    scanf("%i",&a);

    printf(" enter number b=");
    scanf("%i",&b);

    temp=a;
    a=b;
    b=temp;
    printf(" a=%i  b=%i ",a,b);
    return 0;
}