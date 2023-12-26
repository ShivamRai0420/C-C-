#include<stdio.h>
void dowork(int a, int b, int *sum,int *prod,int *avg);

int main()
{
    int a=2, b=6;
    int sum,prod,avg;
    dowork(a,b,&sum,&prod,&avg);
    printf("sum = %i,prod=%i,avg=%i\n",sum,prod,avg);


}

void dowork(int a, int b, int *sum,int *prod,int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}

