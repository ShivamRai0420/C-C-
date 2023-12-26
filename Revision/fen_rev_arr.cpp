#include<iostream>
using namespace std;
int array_rev(int arr[],int size)
{
    int i=0;
    int j=5-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<5;i++){
        cout<<" "<<arr[i];
    }
}
int main(){
    int arr[]={1,2,3,45,8};
    array_rev(arr,5);
}