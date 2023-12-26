//  Q.1 W.A.P to delete an array element, element take from user.
//Ans.
#include<stdio.h>
int main()
{
    
    int a[]={1,2,9,4,5};

    int dlt;
    printf("konsa no. dlt krna hai=");
    scanf("%i",&dlt);
    for(int i=dlt-1;i<5-1;i++)
    {
        a[i]=a[i+1]; 
    }
    for(int i=0;i<5-1;i++)
    {
        printf("\n%i ",a[i]);

    }
    return 0;
}