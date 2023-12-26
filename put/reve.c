#include<stdio.h>
int main(){
    int n=12345;
    int rem,rev=0;
    while(n>0)
    {
        int rem=n%10;
        int rev=rev*10+rem;
        int n=n/10;
    }
    printf("%d",rev);

}