#include<iostream>
using namespace std;
int Sort(int arr[],int len){
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    for(int i=0;i<len;i++){
        cout<< arr[i];
    }
}
int main(){
    int arr[]={1,4,3,6,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    Sort(arr,len);

}