#include<iostream>
using namespace std;
int main(){
    int n=121;
    int rem;
    int rev=0;
    int copy=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(copy==rev){
        cout<<"true";
    }
    else{
        cout<<"f";
    }
    return 0;
}