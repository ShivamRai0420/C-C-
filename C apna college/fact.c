#include<stdio.h>
int main()
{
    int n,fact;
    printf("enter no.=");
    scanf("%i",&n);
    fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i; 
    }
    printf("%i",fact);
}