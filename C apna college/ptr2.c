#include<stdio.h>
int main()
{
    int x;
    int *ptr;

    ptr=&x;
    *ptr=0;
    printf("%i\n",x);
    printf("%i\n",*ptr);

    *ptr +=5;
    printf("%i\n",x);
    printf("%i\n",*ptr);

    (*ptr)++;
        printf("%i\n",x);
    printf("%i\n",*ptr);
}