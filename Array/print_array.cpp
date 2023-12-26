#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"kitne no. chahiye";
    cin>>n;
    //taking input in array
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //printing array element
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}