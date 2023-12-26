
#include<stdio.h>
int main()
{
    int n;
    printf("kitne numbe hai:");
    scanf("%i",&n);
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
    }

    for(int i=0;i<n;i++)
{
    int count=0;
    for(int j=0;j<n;j++)
 {
     if(a[i]==a[j])
     {
       count++;
     }   
 }    
       if(count==1)
    {
        printf("%i  ",a[i]);
    }
}      
   
    return 0;
}