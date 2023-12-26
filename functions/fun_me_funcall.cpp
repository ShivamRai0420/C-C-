#include<iostream>
using namespace std;

void suresh(int k)
{
    cout<<"suresh int="<<k<<endl;
    
}
void rahul(int m)
{
    cout<<"rahul int="<<m<<endl;
    m++;
    suresh(m);
}
void ramesh(int n)
{
    cout<<"ramesh int="<<n<<endl;
    n++;
    rahul(n);
}

int main()
{
    int n=21;
    ramesh(n);
    cout<<"waps in main fun"<<n<<endl;
    return 0;
}