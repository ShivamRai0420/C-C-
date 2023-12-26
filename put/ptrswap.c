#include<stdio.h>
void swap(int *a, int *b);
int main()
{
    int x=5;
    int y=4;
    swap(&x,&y);
    printf("x=%i y=%i",x,y);
}
//call by reference
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}