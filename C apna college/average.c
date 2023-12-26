#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter no.");
    scanf("\n%i%i%i",&x,&y,&z);
    int sum=x+y+z;
    int average=sum/3;
    printf("%i",average);
    return 0;
}