#include<stdio.h>
int main()
{
    int n,insrt,pos;
    printf("Enter an array element");
    scanf("%i",&n);
    int a[n];
    int a2[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%i",&a[i]);
    }

    printf("konsa element insert krna hai");
    scanf("%i",&insrt);

    printf("kha element insert krna hai");
    scanf("%i",&pos);

    for(int i=1;i<pos;i++)
    {
        a2[i]=a[i];
    }
    a2[pos]=insrt;              
    for(int i=pos;i<=n;i++)     
    {
        a2[i+1]=a[i];
    }
    for(int i=1;i<=n+1;i++)
    {
        printf("%i ",a2[i]);
    }


    return 0;
}