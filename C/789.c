#include<stdio.h>
int main()
{
    int number[]={7,8,9};
    int totalnumber=sizeof(number)/sizeof(number[0]);

    if(number[totalnumber-1] !=9)
    { 
        
     number[totalnumber-1]++;
    }

    else
    {
     for(int i=totalnumber;i>=0;i--)
     {
         
            if(number[totalnumber-i]==9)

         {
             
            number[i]==0;
         }
         
     }

    }
    for(int i=0;i<totalnumber;i++)
    {
        printf("%i",number[i]);
    }
    
    return 0;
}