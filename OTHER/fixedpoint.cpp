//find fixed point (Index = Value) in a sorted array

#include<iostream>
using namespace std;

int getFixedPoint(int arr[], int n) {
    int s = 0;
    int e = n-1;

    while(s <= e) {
        int mid = (s+e)/2;
        if(arr[mid] == mid)
            return mid;

        if(arr[mid] > mid) {
            e = mid - 1;
        }    
        else{
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    // int arr[]={-10,5,0,3,7};
    int arr[]={5,4,2,2,1};
    int n=5;
    cout<<"index="<<getFixedPoint(arr, n);    

}