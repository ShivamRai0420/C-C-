#include<iostream>
using namespace std;
void print(int n)
{
    //base case
    if(n<1)
    {
        return ;
    }
    print(n-1);         //head recursion
    cout<<n<<"";
}
int main()
{
    print(5);
    cout<<endl;
    return 0;
}