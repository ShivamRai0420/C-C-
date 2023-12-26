#include<stdio.h>
int main()
{
    int n;
    printf("kitne number hsi");
    scanf("%i",&n);

    int a[n];
    int a2[n+1];
    for(int i=0;i<n;i++)
    {
         scanf("%i",&a[i]);
    }
    int insrt;
    int new_pos;
    printf("which number you want to insert: =");
    scanf("%i",&insrt);
    printf("which place:");
    scanf("%i",&new_pos);

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


return 0;
}