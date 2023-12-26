#include<iostream>
using namespace std;
int main()
{
    // creation
    // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int arr[4][2]={(1,2),(2,3),(3,4),(4,5)};
    int target=9;
 
    for(int i=0;i<4;i++)
    {
        // for entire column
        for(int j=0;j<2;j++)
        {
            if(arr[i][j]==target)
            {
                cout<<"found";

            }
            
        }
    }
    cout<<"don";
}
