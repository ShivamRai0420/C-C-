#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,4,6,8,9,11,23};
    int l=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+l);
    for(int i=0;i<l;i++){

    cout<<arr[i]<<endl;
    }
    
    return 0;
   
}