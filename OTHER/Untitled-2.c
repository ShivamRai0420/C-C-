#include<stdio.h>
int main()
{
    int n;
    printf("kitne no. chhiye");
    scanf("%i",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        printf("%i ",arr[j]);
    }
    return 0;

}