#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int i=0;
    // int j=5-1;
    while(i<5)
    {
        if(i+1<5)
        {
          swap(arr[i],arr[i+1]);
      
        }
      i=i+2;
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}