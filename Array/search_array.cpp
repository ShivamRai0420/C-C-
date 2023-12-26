#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,92,43,54,32};
    int search=92;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==search)
        {
            cout<<"found";
        }
    }
        
    // cout<<arr[4];
}