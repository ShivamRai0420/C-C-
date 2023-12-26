#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){
    int n;
    cout<<"kitne no. chahiye";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // int arr[]={4,53,56,24,6};
    printArray(arr,n);
    return 0;
}