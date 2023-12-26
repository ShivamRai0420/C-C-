#include<stdio.h>
#include<conio.h>

void main()
{
    void add(int,int);
    int x,y;
    printf("enter two no=");
    scanf("%i %i",&x,&y);

    add(x,y);
     getch();
}

void add(int a, int b )
{
   int c;
   c=a+b;
   printf("sum is %i",c);
}



