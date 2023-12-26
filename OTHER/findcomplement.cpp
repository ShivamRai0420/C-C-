#include<iostream>
using namespace std;
int main()
{
    int findcomplement(int n);
    int mask=0;
    int n=5;
    while(mask<n)
    {
        mask=(mask<<1)|1;
    }
    int ans=(~n)&mask;
    cout<<ans;

}
