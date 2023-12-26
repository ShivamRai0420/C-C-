#include<iostream>
using namespace std;
int main(){
    int first=0;
    int second=1;
    cout<<first<<" "<<second;
    // cout<<second;
    for(int i=1;i<5;i++){
        int temp=first+second;
        first=second;
        second=temp;

        cout<<" "<<temp;
    }
}