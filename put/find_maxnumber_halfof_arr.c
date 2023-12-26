#include<stdio.h>
int main()
{
    int arr[]={1,1,1,1,1,1,1,1,3,4,5,1,1,1,1,1,1,4,7,3,7,5,9,4,7,1,2};
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
        if(occ[max]>len/2)
        {
    printf("most repeted  number is %i and %i times  ", max,occ[max]);
        }
     else
     {

         printf("most repited numbe is less than half of number");
     }
    return 0;
}