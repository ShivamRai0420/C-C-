#include<iostream>
using namespace std;
int array_sum(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}
int main(){
    int arr[]={1,2,3,45,8};
    array_sum(arr,5);
}