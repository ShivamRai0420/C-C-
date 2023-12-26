#include<stdio.h>
int main()
{
    int i,j ,k=1;
    for(int i=1;i<5;i++)
    {
         
        for(int j=1;j<6;j++)
        {
            if(i==1||i==4||j==1||j==5)
            {
                printf("* ");
            }
            else
            {
                printf("%i ",k);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}