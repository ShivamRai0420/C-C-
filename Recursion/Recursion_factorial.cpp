// function call itself called recursion
#include<iostream>
using namespace std;
int factorial(int n)
{
    //base caase (kha rukna h)
    if(n==1)
    {
        return 1;
    }
    //return n*factorial(n-1);  or      this is Recursive relation
    
    int smallerProbAns=factorial(n-1);
    int biggerProbAns=n*factorial(n-1);
    return biggerProbAns;
}

int main()
{
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    cout<<"fact of n is"<<factorial(n)<<endl;      //recursn call in end called "tail" and call in strt called head.
}