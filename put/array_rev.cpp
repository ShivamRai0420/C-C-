#include<iostream>
using namespace std;

int revArray(int arr[],int len)
{
    int i=0;
    int j=len-1;
    while(i<j)
    {
         swap(arr[i],arr[j]);
         i++;
         j--;
    }
        for(int i=0;i<len;i++)
    {
        cout<<arr[i];
    }
    return 0;

}
int main()
{
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[2]);
    revArray(arr,len);

}