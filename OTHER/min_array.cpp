#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,1,6,2,6,9};
    int l=sizeof(arr)/sizeof(arr[0]);
    int min=0;
    for(int i=0;i<l;i++)
    {
        if(arr[min]>arr[i])
        {
            min=i;
        }

    }
    cout<<arr[min];
}