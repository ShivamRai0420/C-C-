#include<stdio.h>
#include<math.h>
int main()
{
    int number[]={7,8,6};
    int totalnumbers=sizeof(number)/sizeof(number[0]);

    number[totalnumbers-1]++;

    for(int i=0;i<totalnumbers;i++)
    {
        printf("%i",number[i]);
    }
    
    return 0;
}