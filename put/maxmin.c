#include<stdio.h>
int main()
{
    
    int a[]= {1,2,3,4,5,56,6,6,117,4};
    int max=0,min=0;

    int len=sizeof(a)/sizeof(a[4]);
    
      for(int i=0;i<len;i++)
    {
       if(a[max]<a[i]) {
           max=i;
       }
    }
    printf("max =%i ", a[max]);

    
      for(int i=0;i<len;i++)
    {
       if(a[min]>a[i]) {
           min=i;
       }
    }
    printf("\nmin=%i ", a[min]);

    return 0;
}
 
   