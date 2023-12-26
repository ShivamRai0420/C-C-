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
            printf("enter an choce(1,2,3,4):");
            scanf("%i",&opt);
            int search;
             int max=0;
             int insrt;
             int pos;
             int dlt;
             int a2[n+1];
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

             case 3:

               int dlt;
               printf("konsa no. dlt krana hai= ");
               scanf("%i",&dlt);
    
                for(int i=dlt-1;i<n-1;i++)
            {
                a[i]=a[i+1]; 
            }
                 for(int i=0;i<n-1;i++)
            {
                printf("\n %i ",a[i]);
            }
                break;

                case 4:

                printf("konsa element insert krna hai");
                scanf("%i",&insrt);

                    printf("kha element insert krna hai");
                    scanf("%i",&pos);

                for(int i=0;i<new_pos-1;i++)
    {
        a2[i]=a[i];
    }
     a2[new_pos-1]=new_pos;

     for(int i=insrt-1;i<n;i++)
     {
         a2[i+1]=a[i];
     }
      for(int i=0;i<n+1;i++)
    {
         printf("%i  ",a2[i]);
    }
                 break;
        }       
         
         return 0;
}