#include<iostream>
using namespace std;
// int revArray(int arr[],int n)
// {
//     int i=0;
//     int j=n-1;
//     while(i<j)
//     {
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     // print array
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }
//     return 0;

// }

// int main()
// {
//     int arr[]={1,2,3,4,5};
//     revArray(arr,5);
// }

int revArray(int arr[],int size){
        int i=0;
        int j=size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    // print array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
int main()
{
    int arr[]={46,7445,7,5,4};
    int l=sizeof(arr)/sizeof(arr[1]);
    revArray(arr,l);
}
