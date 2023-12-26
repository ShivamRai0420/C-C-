#include<stdio.h>
int main()
{
    
    int arr[4][3]= {{1,2,3},{4,5,6},{1,2,3},{3,2,1}};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%i ", arr[i][j]);
        }
        {
                printf("\n");

        }
    }    
    

    return 0;
}    