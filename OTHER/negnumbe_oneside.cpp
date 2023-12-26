#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,-2,4,9,-1};
    int i=0;
    int j=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[j]);
            j++;
            cout<<arr[i];
        }

    }
}