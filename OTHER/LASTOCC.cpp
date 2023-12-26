

//Find Last Occurences of a element in sorted array
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int lastOcc(int arr[], int n, int target) {
    int start = 0;
    int end = n-1;

    int mid = start +(end - start)/2;
    int ans = -1;
    while(start <= end) {
        int midElement = arr[mid];

        //element found
        if(midElement == target) {
            ans = mid;
            start = mid+1;
        }

        //check in left part and neglect right part
        if(target < midElement) {
            end = mid - 1;
        }
        else{
            //check in right part and neglect left part
            start = mid+1;
        }

        mid = start +(end - start)/2;
    }
    return ans;
}
int main()
{
    int arr[]={2,1,3,4,4,4,9};
    int n=7;
    int target=4;
    cout<<"lastOcc="<<lastOcc(arr, n, target)<<endl;    

}