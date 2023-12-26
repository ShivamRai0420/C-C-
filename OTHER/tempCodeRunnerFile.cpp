#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"kitne no. chahiye";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

    // int dlt;
    // cout<<"konsa dlt krna hai";
    // cin>>dlt;
    // for(int i=dlt-1;i<n;i++){
    //     arr[i]=arr[i+1];
    // }
    // for(int i=0;i<n-1;i++){
    //     cout<<arr[i];
    // }

    // int search;
    // cout<<"konsa search krna h";
    // cin>>search;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==search){
    //         cout<<"elm found";
    //     }
    // }

    // int max=arr[0];
    // for(int i=1;i<n;i++)
    // {
    //     if(arr[i]>max)
    //     {
    //         max=arr[i];
    //     }
    // }
    // cout<<max;

    // int min=arr[0];
    // for(int i=1;i<n;i++)
    // {
    //     if(arr[i]<max)
    //     {
    //         max=arr[i];
    //     }
    // }
    // cout<<min;

    //reverse array
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