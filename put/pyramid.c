//  Q.1 W.A.P to print star pattern of Pyramid.
//Ans.
#include<stdio.h>
int main()
{
    int i,j,k;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=9;j++)
        {
            k=1;
            if(j>=6-i&&j<=4+i&&k)
            {
                printf("*");
                 k=0;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}