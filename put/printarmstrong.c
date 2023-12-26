//  Q.1 W.A.P to check 153 NUMBER is "Armstrong no." or Not.
//Ans.
#include<stdio.h>
int main()
{
    int n=153;
    int rem,sum=0;
    int copy=n;

    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(copy==sum)
    {
    printf("Armstromg !");
    }
    else
        printf("Not Armstromg !");


    return 0;
}