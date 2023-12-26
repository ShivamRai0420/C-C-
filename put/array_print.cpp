#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    // enter size of an array
    int n;
    cout<<"size of an array=";
    cin>>n;

    // taking element of an array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // print element of an array
    cout<<"element of array";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}