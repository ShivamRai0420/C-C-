#include<iostream>
#include<climits>
using namespace std;

int getMaxArray(int arr[],int n)
{
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,arr[i]);
    }
    cout<<"max"<<ans;
    return 0;
}
int main()
{
    int arr[]={3,4,1,2,5};
    getMaxArray(arr,5);
}