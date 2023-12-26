#include<iostream>
using namespace std;
int rev(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int ar[]={1,2,3,4};
    rev(ar,4);
}