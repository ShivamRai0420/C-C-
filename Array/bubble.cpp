#include<iostream>
using namespace std;
int main(){
    // int arr[]={2,5,1,7,3};
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int len=sizeof(arr)/sizeof(arr[2]);
    for(int i=0;i<len-1;i++){
        for(int j=0;j<(len-i-1);j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
        //dry run
        // cout<<"step"<<i+1<<": ";
        // for(int j=0;j<len;j++){
        // cout<<arr[j]<<" ";
        // cout<<endl;
        // }
    }
    for(int i=0;i<len;i++){
        cout<<arr[i];
    }
    
}