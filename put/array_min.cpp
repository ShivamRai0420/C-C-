#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,8,3,9,2};
    int len=sizeof(arr)/sizeof(arr[4]);
    int min=0;
    for(int i=0;i<len;i++)
    {
        if(arr[min]>arr[i])
        {
            min=i;
        }
    }
    cout<<arr[min];
}