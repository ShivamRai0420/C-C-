#include<stdio.h>
int sum(int a,int b);

int main()
{
    int a,b;
    printf("enter first no.=");
    scanf("%i",&a);
    printf("enter sec no.=");
    scanf("%i",&b);

    int s=sum(a,b);
    printf("sum is %i",s);
    return 0;

}

int sum(int x, int y)
{
    return x+y;
}