#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    
    int l=sizeof(arr)/sizeof(arr[3]);
    int ans=INT_MIN;
    int sum=0;
    for(int i=0;i<l;i++){
        sum=sum+arr[i];
        ans=max(ans,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<ans;
}