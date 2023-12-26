#include<iostream>
using namespace std;
int binarySearch(int arr[],int len,int target){
    int s=0;
    int e=len-1;
    int mid=(s+e)/2;
    while(s<=e){
        int midElement=arr[mid];
        if(arr[mid]==target){
            return mid;
        }
        if(target<midElement){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;

    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5};
    int target=2;
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr,len,target);
}