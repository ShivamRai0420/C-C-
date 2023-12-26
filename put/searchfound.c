#include<stdio.h>
int main()
{
    int n;
    printf("kint no. chhiye=");
    scanf("%i",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
    }

    int search;
    printf("konsa  no. search krna hai=");
    scanf("%i",&search);

    for(int i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("found!");
            break;
        }
        else
        {
          printf("not found!");
          break;

        }
    }

    return 0;
}