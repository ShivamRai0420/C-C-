#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    cout<<"which operation"<<endl;
    char op;
    cin>>op;
    switch (op)
    {
    case '+': cout<<a+b<<endl;
        break;
    
    case '-': cout<<a-b<<endl;
        break;
    
    case '*': cout<<a*b<<endl;
        break;
    
    case '/': cout<<a/b<<endl;
        break;
    
    default:
        break;
    }
}