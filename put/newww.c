#include<stdio.h>
int main()
{
    int i,j;
    int k=0;

    for(int i=1;i<5;i++)
    {
            for(int j=1;j<=5-i;j++)
            {
                k++;
                printf("%i ",k);
            }
            printf("\n");
    }
    return 0;
}