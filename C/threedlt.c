
#include<stdio.h>
int main()
{
    int i,n;
    printf("kitne numbe hai:");
    scanf("%i",&n);
    
    int a[n];
    int dlt1;
    int dlt2;
    int dlt3;

    for(int i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
    }
      
         printf("konsa no. dlt krna hai=");
         scanf("%i%i%i",&dlt1,&dlt2,&dlt3);

        {
            printf("no. %i,%i aur no. %i  ko dlt kre",dlt1,dlt2,dlt3);
        }

    for(int i=dlt1-1;i<n-1;i++)
    {
        
          for(int i=dlt2-1;i<n-1;i++)  
          {
        
            for(int i=dlt3-1;i<n-1;i++)  
          {
        
           a[i]=a[i+1]; 
          }
           a[i]=a[i+1]; 
          }
           a[i]=a[i+1];
    } 

    for(int i=0;i<n-3;i++)
    {
        printf(" \n %i ",a[i]);
    }
    
    return 0;
}
