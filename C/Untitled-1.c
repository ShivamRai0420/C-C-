#include<stdio.h>
int main()
{
    int first=0;
    int sec=1;
    printf("%i %i",first,sec);


    for(int i=1;i<=5;i++){
    int temp=first+sec;
    first=sec;
    sec=temp;
    printf(" %i",temp);
    }
     return 0;

}