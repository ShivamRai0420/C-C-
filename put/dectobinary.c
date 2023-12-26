#include<stdio.h>
#include<math.h>
int main()
{
    int rem;
    int a=65;
    while(a>0)
    {
        rem=a%2;
        printf("%i",rem);
        a=a/2;  
    }
    return 0;
}
