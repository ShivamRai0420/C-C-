#include<iostream>
#include<climits>
using namespace std;

//Max array elm
void maxArray(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
}

//minarray element
void minArray(int arr[],int size){
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min;
}

//By sort min function
int minSortArray(int arr[],int size){
    int ans=INT_MAX;
    for(int i=0;i<size;i++)
    {
        ans=min(ans,arr[i]);
    }
    // return ans;
    cout<<ans<<endl;
}
//By sort max function
int maxSortArray(int arr[],int size){
    int ans=INT_MIN;
    for(int i=0;i<size;i++)
    {
        ans=max(ans,arr[i]);
    }
    cout<<ans<<endl;
    // return ans;
}

int main(){
    int arr[]={2,11,7,75,56};
    int size=sizeof(arr)/sizeof(arr[0]);
    // maxArray(arr,size);
    // minArray(arr,size);
    maxSortArray(arr,size);
    minSortArray(arr,size);
}