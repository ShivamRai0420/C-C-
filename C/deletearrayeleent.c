//  Q. W.A.P to delete an element in array.
// Ans.
#include<stdio.h>
int main()
{
    int n;
    printf ("enter array element= ");
    scanf("%i",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
    }
    int dlt;
    printf("konsa no. dlt krana hai= ");
    scanf("%i",&dlt);
    
    for(int i=dlt-1;i<n;i++)
    {
        a[i]=a[i+1]; 
    }
    for(int i=0;i<n-1;i++)
    {
        printf("\n %i ",a[i]);
    }
    return 0;
}
