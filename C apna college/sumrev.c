#include<stdio.h>
int main()
{
    int n;
    printf("enter no.=");
    scanf("%i",&n);

    int sum=0;
    for(int j=n; j>=1; j--)
    {
        sum=sum+j;
        printf("%i\n",j);

    }
      printf("sum is %i",sum);

    return 0;
}