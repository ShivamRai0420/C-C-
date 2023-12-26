#include<stdio.h>
int main()
{
    int age;
    printf("enter age=");
    scanf("%i",&age);

    age>=18?printf("adult"):printf("not adult");
    return 0;
}
