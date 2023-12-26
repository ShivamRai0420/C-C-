#include<stdio.h>
int main()
{
    int count; 
    int a[]={-1,-2,34,-56,12,67,5};
for(int i=0;i<7;i++)
{
   if(a[i]<0)
{
    count++;
}
}
     printf("%i ",count);
    return 0;
}