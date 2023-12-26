#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,8,3,9,2};
    int len=sizeof(arr)/sizeof(arr[4]);
    int max=0;
    for(int i=0;i<len;i++)
    {
        if(arr[max]<arr[i])
        {
            max=i;
        }
    }
    cout<<arr[max];
}