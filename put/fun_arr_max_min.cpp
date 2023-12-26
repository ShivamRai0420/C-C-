#include<iostream>
using namespace std;

max_array(int arr[],int len){
    int max=0;
    for(int i=0;i<len;i++){
        if(arr[max]<arr[i]){
            max=i;
        }
    }
    cout<<arr[max]<<endl;
}
min_array(int arr[],int len){
    int min=0;
    for(int i=0;i<len;i++){
        if(arr[min]>arr[i]){
            min=i;
        }
    }
    cout<<arr[min];
}
int main(){
    int arr[]={1,2,4,3,9};
    int len=sizeof(arr)/sizeof(arr[1]);
    max_array(arr,len);
    min_array(arr,len);
}