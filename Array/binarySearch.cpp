#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int target )
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        int midElement=arr[mid];

        if(midElement==target)
        {
            return true;
        }

        if(target<midElement)
        {
            end=mid-1;
        }
        if(target>midElement)
        {
            start=mid+1;
        }
         mid=(start+end)/2;
    }
    return false;
}
int main()
{
    int arr[]={2,4,6,8,9,11,23};
    int target=23;
    if(binarySearch(arr,7,23))
    {
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;
   
}