#include<stdio.h>
int main()
{
    do{
        int n;
        printf("enter no.=");
        scanf("%i",&n);
        printf("%i",n);

        if(n%7==0)
        {
            break;
        }

    }
    while(1);
        printf("thnq\n");

    return 0;
}