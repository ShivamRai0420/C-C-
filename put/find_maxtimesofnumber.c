#include<stdio.h>
int main()
{
    int arr[]={1,1,1,1,1,1,1,3,4,5,2,3,4,4,5,2};
    int occ[]={0,0,0,0,0,0,0,0,0,0};
     
    int len= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<len;i++)
    {
        occ[arr[i]]++;
    }
      int max=0;
    for(int i=0;i<10;i++)
    {
            if(occ[i]>occ[max])
            {
                max=i;
            }
    }

    printf("most repeted  number is %i of %i times  ",max,occ[max]);

    return 0;
}