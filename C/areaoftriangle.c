#include<stdio.h>
int main()
{
    int area,height,base;
    printf("enter height of triangle=");
    scanf("%i",&height);
    printf("enter base of triangle=");
    scanf("%i",&base);

    area=(height*base)/2;
    printf("area  of triangle=%i",area);

    return 0;
}