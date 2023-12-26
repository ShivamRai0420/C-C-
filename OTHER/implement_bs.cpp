#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


//Implement Binary Search
int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n-1;

    int mid = start +(end - start)/2;

    while(start <= end) {
        int midElement = arr[mid];

        //element found
        if(midElement == target) {
            return mid;
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
    return 0;
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
        cout<<"element found"<<endl;
    }
    return 0;
   
}    
