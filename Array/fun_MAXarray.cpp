#include<iostream>
#include<climits>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

// int getMaxArray(int arr[],int size){
//     int ans=INT_MIN;
//     for(int i=0;i<size;i++){
//         ans=max(ans,arr[i]);
//     }
//     // cout<<ans;
//     return ans;
// }
// int main()
// {
//     int arr[6]={46,7445,7,5,4};
//     cout<<"max val="<<getMaxArray(arr,6);
// }



int getMaxArray(int arr[],int size){
    
    cout<<*max_element(arr,arr+size);
    return 0;
}
int main()
{
    int arr[6]={46,7445,7,5,4};
    int l=sizeof(arr)/sizeof(arr[1]);
    for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";
    }

    cout<<"max val="<<getMaxArray(arr,l);
} 

   