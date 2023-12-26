#include<stdio.h>
int main()
{
    int n;
    printf("kitne no. chahiye");
    scanf("%i",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
    }

    int dlt;
    printf("konsa no. dlt krna hai:");
    scanf("%i",&dlt);

    for(int i=dlt;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%i ",a[i]);
    }

    return 0;
}
