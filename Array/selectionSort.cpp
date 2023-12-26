#include<iostream>
using namespace std;
int main()
{
    // int arr[]={64,25,12,22,11};
    int arr[]={4,1,9,2,3,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    //outer loop
    for(int i=0;i<len;i++){
        int minIndex=i;
        //find minElement
        for(int j=i+1;j<len;j++){
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[i],arr[minIndex]);
    }
    //print sorted array
    for(int i=0;i<len;i++){
        cout<< arr[i]<<endl;
    }                                                                                                                                   
}