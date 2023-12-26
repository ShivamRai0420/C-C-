#include<iostream>
using namespace std;
bool linearSearch(int arr[],int len,int search){
    for(int i=0;i<len;i++){
        if(arr[i]==search){
            return true;
        }
        else{
            return false;
        }
        
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int search=9;
    if(linearSearch(arr,len,search)){
        cout<<"found";
    }
    else{
        cout<<"not";
    }
}