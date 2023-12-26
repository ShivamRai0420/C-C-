#include<stdio.h>
int calPercentage(int science,int math,int sanskrit);

int main()
{
    int science=70;
    int math=70;
    int sans=70;

    printf("percentage is %i",calPercentage(science,math, sans));

}
int calPercentage(int science,int math,int sanskrit){
   return ((science + math + sanskrit)/3); 
}

