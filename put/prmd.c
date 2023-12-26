//  Q.1 W.A.P to print star pattern of Pyramid.
//Ans.#include<stdio.h>
int main()
{
    int i,j;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=9;j++)
        {
            
            if(j)
            {
                printf("*");
                 
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