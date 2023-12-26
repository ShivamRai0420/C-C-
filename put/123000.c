#include<stdio.h>
int main()
{
    int i,j;
    int k=1;
    
    for(int i=1;i<3;i++)
    {
        for(int j=1;j<6;j++)
        {
            if(i-j>0)
            {
                printf("  ");
            }
            else
            {
                printf("%i ",k);
                k++;
            }
        }
            printf("\n");
    }
    {
       printf("    0 0 0");

    }
    return 0;
}