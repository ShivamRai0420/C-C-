//  Q.1 W.A.P to print sum of array , element take from user.
//Ans.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter array element");
    scanf("%i",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum is %i",sum);
    return 0;
}