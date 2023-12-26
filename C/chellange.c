#include<stdio.h>
int main()

{
      
     int n1;
      printf("kise chalana hai");
      scanf("%i",n1);
      
         if(n1==1)
         {
              int n;
             printf("kitne numbe hai:");
             scanf("%i",&n);
    
             int a[n];
             for(int i=0;i<n;i++)
         {
             scanf("%i",&a[i]);
         }
             int search;
                 printf("kise dundhna hai");
                 scanf("%i",&search);

             for(int i=0;i<n;i++)

         {
                 if(a[i]==search)
             {
                 printf("found");
             }
            
         }
         }
             else if(n1==2)

        {
              int n;
                printf("kitne numbe hai:");
                scanf("%i",&n);
    
                int a[n];
                for(int i=0;i<n;i++)
            {
                scanf("%i",&a[i]);
            }
                  int max=0;
                    for(int i=0;i<n;i++)
                {
                    if(a[i]>a[max])
                  {
                      max=i;
                  }

                }
              printf("max value=%i",max);
              
             
                    
        }       
         
         return 0;
}