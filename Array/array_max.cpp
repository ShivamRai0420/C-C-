#include<iostream>
using namespace std;
int main()
{
    // Maximum array elm
    int arr[]={1,8,3,9,2};
    int len=sizeof(arr)/sizeof(arr[4]);
    int max=arr[0];
    for(int i=1;i<len;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max;

    //Minimum array elm
    // int arr[]={1,8,3,9,2};
    // int len=sizeof(arr)/sizeof(arr[4]);
    // int min=arr[0];
    // for(int i=1;i<len;i++)
    // {
    //     if(arr[i]<min)
    //     {
    //         min=arr[i];
    //     }
    // }
    // cout<<min;
}