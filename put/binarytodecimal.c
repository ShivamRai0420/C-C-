#include<stdio.h>
#include<math.h>
int main()
{
    int rem,sum=0;
    int count=0;
    int a=1000001;
    while(a>0)
    {
        rem=a%10;
        sum=sum+(rem*pow(2,count));
        a=a/10;
        count++;
    }
    printf("%i",sum);
    return 0;
}
