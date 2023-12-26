#include<iostream>
using namespace std;
void swapAlternate(int arr[],int l){
   
    for(int i=0; i<l; i+=2){
        if(i+1<l) {
            swap(arr[i],arr[i+1]);
        }
    } 

    for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int l=sizeof(arr)/sizeof(arr[2]);
    swapAlternate(arr,l);
}

// #include <iostream>
// using namespace std;
// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void swapAlternate(int arr[], int size){
//     for(int i=0; i<size; i+=2){
//         if(i+1<size) {
//             swap(arr[i],arr[i+1]);
//         }
//     } 
// }

// int swap(int a, int b) {
//     int c=a;
//     a=b;
//     b=c;  
//     return a,b;
// }

// int main() {
//     int arr[6];
//     for(int i=0; i<6; i++) {
//         cin>>arr[i];
//     }
//     swapAlternate(arr, 6);
//     printArray(arr,6);
// }