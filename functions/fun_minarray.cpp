#include<iostream>
#include<climits>
using namespace std;

int getMinArray(int arr[],int n)
{
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        ans=min(ans,arr[i]);
    }
    cout<<"min"<<" "<<ans;
    return 0;
}
int main()
{
    int arr[]={3,4,1,2,5};
    getMinArray(arr,5);
}