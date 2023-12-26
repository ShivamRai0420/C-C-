#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n==1){
        return 1;
    }
    int smaller_prob=fact(n-1);
    int bigrprob=n*smaller_prob;
    // return n*fact(n-1);
    return bigrprob;
}

int main(){
    int n=5;
    cout<<fact(n)<<endl;
}