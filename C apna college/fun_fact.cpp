#include<iostream>
using namespace std;

void getFact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i; 
    }
    cout<<fact;
}
int main()
{
    int n=5;
    getFact(n);
    return 0;
}