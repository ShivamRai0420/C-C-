#include<iostream>
using namespace std;
int main()
{
    int n=237;
    while(n!=0)
    {
        int digit=n%10;
        cout<<digit<<endl;
        n=n/10;
    }

}