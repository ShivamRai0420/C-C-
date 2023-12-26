#include<stdio.h>
int main()
{

    
    int n[]= {1,2,3,4,5,67,72,77,511};

    int search=6;
    
    for(int i=0;i<10;i++)
    {
       if(n[i]==search) {
           printf("found !");
           break;
       }
       
    }

    return 0;
}