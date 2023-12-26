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
      
           
            int opt;
            printf("enter an choce(1,2):");
            scanf("%i",&opt);
            int search;
             int max=0;
        switch(opt)
         {
             case 1:
                 
                 printf("kise dundhna hai");
                 scanf("%i",&search);

                for(int i=0;i<n;i++)

         {
                 if(a[i]==search)
             {
                 printf("found");
             }
               
         }
                 break;

          case 2:
                    
                   
                    for(int i=0;i<n;i++)
                {
                    if(a[i]>a[max])
                  {
                      max=i;
                  }

                }
              printf("max value=%i",a[max]);
              
             break;
                    
        }       
         
         return 0;
}