#include<stdio.h>
int main()
{
    int n=153,rem,sum=0;
    int copy=n;

    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(copy==sum){
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}