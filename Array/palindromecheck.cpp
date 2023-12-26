#include <iostream>
using namespace std;
int checkPalindrome(int n)
{
    int rem,rev=0;
    int copy=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(copy==rev){
        cout<<"palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
}
int main()
{
    int n = 123;
    checkPalindrome(n);
}