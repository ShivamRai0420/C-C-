
#include<stdio.h>
int main()
{
    int i,n;
    printf("kitne numbe hai:");
    scanf("%i",&n);
    
    int a[n];
    int dlt1;
    int dlt2;
   
    for(int i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
    }
      
         printf("konsa no. dlt krna hai=");
         scanf("%i%i",&dlt1,&dlt2);

        {
            printf("no. %i aur no. %i  ko dlt kre",dlt1,dlt2);
        }

    for(int i=dlt1-1;i<n-1;i++)
    {
        
          for(int i=dlt2-1;i<n-1;i++)  
          {
             a[i]=a[i+1]; 
          }
           a[i]=a[i+1];
    } 

    for(int i=0;i<n-2;i++)
    {
        printf(" \n %i ",a[i]);
    }
    
    return 0;
}