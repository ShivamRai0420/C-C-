#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    int smallprob=power(n-1);
    int bigprob=2*power(n-1);   //recursive relation
}
int main(){
    int n;
    cin>>n;
    cout<<"power of n="<<power(n);
}