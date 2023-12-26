#include<iostream>
using namespace std;
int main()
{
    //creation
    int arr[3][3];
    int n=3;

    // input
    for(int i=0;i<n;i++)
    {
        //for entire row
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }      
    }
    // print 2D Matrix
    for(int i=0;i<n;i++)
    {
        //for entire row
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;      
    }
    return 0;

}