#include<stdio.h>
int main()
{
    int number[]={1,2,3,4,5,6,6,6,};
    int totalnumber=sizeof(number)/sizeof(number[0]);

    if(number[totalnumber-1]<9)
    { 
        number[totalnumber-1]++;
    }
    else
    {
     for(int i=totalnumber-1;i>=0;i--)
     {
        if(number[i]==9)
        {  
            number[i]==0;   
        }
        else{
            number[i]++;
            break;
        }
         
     }

    }
    for(int i=0;i<totalnumber;i++)
    {
        printf("%i",number[i]);
    }
    
    return 0;
}