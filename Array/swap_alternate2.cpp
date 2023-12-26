#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int l=sizeof(arr)/sizeof(arr[1]);
    int s=0;
    int e=l-1;
    while(s<e){
        // swap(arr[s],arr[e]);
        // s=s+2;
        // e=e-2;
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s=s+2;
        e=e-2;
        
    }
    for(int i=0;i<l;i++){

    cout<<arr[i]<<" ";
    }
    
}