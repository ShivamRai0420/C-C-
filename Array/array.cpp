#include<iostream>
#include<array>
using  namespace std;
int main(){
    
    // int arr[]={1,2,3,4,5,6};
    // int l=sizeof(arr)/sizeof(arr[1]);       //return length of array 6
    // int s=sizeof(arr);                      //return size of array 4byte * 6 =24
    // cout<<l<<" "<<s; 
                                            
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<" "<<arr[5];       //return by index

    //creation
    cout<<"kitne number chahiye";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //deletion
    cout<<"konsa dlt krna hai";
    int dlt;
    cin>>dlt;
    for(int i=dlt-1;i<n;i++)
    {
        arr[i]=arr[i+1]; 
    }
    for(int i=0;i<n-1;i++)
    {
    cout<<arr[i];
    }

    //update
    // int arr[]={1,2,3,4,5};
    // for(int i=0;i<5;i++){
    //     arr[0]=2;
    //     cout<<arr[i];
    // }

    return 0;
}