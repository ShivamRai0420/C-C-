#include<iostream>
using namespace std;
int main(){

int arr[5]={1,2,3,4,5};
// int dlt;
// cin>>dlt;
// for(int i=dlt-1;i<5;i++){
//     arr[i]=arr[i+1];                    //arr[2]=arr[3]->8==9 and arr[3]=arr[4] ->9==3 and arr[4]=cndn fail
// }
// for(int i=0;i<5-1;i++){
//     cout<<arr[i]<<" ";
// }

//max
int max=0;
for(int i=0;i<=5;i++)
{
    if(arr[max]<arr[i])
    {
        max=i;
    }
}
cout<<max;
}