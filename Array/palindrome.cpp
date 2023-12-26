#include<iostream>
using namespace std;

int PalindromeNumber(int n){
    int copy=n;
    int rem,rev=0;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(copy==rev){
        cout<<"rev";
    }
    else{
        cout<<"not";
    }
    return 0;

}
int main()
{
    int n;
    cout<<"enter no=";
    cin>>n;
    PalindromeNumber(n);
}