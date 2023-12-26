#include<iostream>
using  namespace std;
    //function
    //linear search
    void printArray(int arr[],int n){
        //printing array elm
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
    }
    bool search(int arr[],int n,int s){
        for(int i=0;i<n;i++){
            if(arr[i]==s){
                return true;
            }
        }
    }
    int main(){
        int n;
        cout<<"enter size of arr";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        printArray(arr,n);
        int s=4;
        if(search(arr,n,s)){
            cout<<"elm found";
        }
        else{
            cout<<"elm not found";
        }
    }

    
// }    

 