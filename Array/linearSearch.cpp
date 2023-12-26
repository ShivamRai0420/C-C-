#include<iostream>
using namespace std;
bool Search(int arr[],int n,int target){
    for(int i=0;i<n;i++){
    if (arr[i]==target){
        return true;
    }
        
    return false;
    }
}
int main(){
    int arr[100];
    cout<<"enter the size of array";
    int n;
    cin>>n;
    //input array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //print array elm
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    //give target to search
    cout<<"which element search";
    int target;
    cin>>target;

    //for linear search
    if(Search(arr,n,target)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found" 
        <<endl;
    }

}