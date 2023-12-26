#include<iostream>
using namespace std;
void sortZeroOneTwo(int arr[],int size){
    int one=0;
    int zero=0;
    int two=0;

    //count all numbers
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else{
            two++;
        }
    }

    int i=0;
    //put zero
    while(zero--){
        arr[i]=0;
        i++;
    }
    //put one
    while(one--){
        arr[i]=1;
        i++;
    }
    //put two
    while(two--){
        arr[i]=2;
        i++;
    }
}
int main(){
    int arr[]={1,0,2,0,1,2};
    int size=sizeof(arr)/sizeof(arr[1]);
    cout<<sortZeroOneTwo(arr,size);
}