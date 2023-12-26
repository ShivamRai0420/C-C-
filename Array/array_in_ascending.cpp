// WAP TO PRINT IN ASCENDING, for descending(arr[j]>arr[i])
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,6,5};
    int l=sizeof(arr)/sizeof(arr[4]);
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++)
        {
            if(arr[j]<arr[i])           
            {
                swap(arr[j],arr[i]);
            }
        }
        cout<<arr[i]<<" ";
    }
    // for(int i=0;i<l;i++){
    //     cout<<arr[i]<<" ";
    // }
}