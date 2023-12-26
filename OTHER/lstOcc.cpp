#include<iostream>
using namespace std;
int lastOcc(int arr[],int n,int target)
{
    int s=1;
    int e=n ;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        int midElement=arr[mid];
        if(midElement==target)
        {
            ans=mid;
            s=mid+1;
            // e=mid-1;
        }
        if(target<midElement){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[]={3,2,2,2,4,4,4};
    int n=7;
    int target=4;
    cout<<"last is"<<lastOcc(arr,n,target);
}