#include<stdio.h>
int main()
{
    int first=0;
    int sec=1;
    int temp=0;
    printf("%i %i", first,sec);
    for(int i=1;i<12;i++)
    {
        temp=first +sec;
        first=sec;
        sec=temp;
        printf(" %i",temp);

    }
    return 0;
}
