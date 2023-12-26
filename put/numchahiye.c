#include<stdio.h>
int main()
{
    int n;
    printf("number chahiye");
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%i",arr[i]);
    }
    return 0;
}