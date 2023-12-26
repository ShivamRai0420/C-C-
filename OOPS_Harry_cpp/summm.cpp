#include<iostream>
using namespace std;
class mul{
    int a,b,c;
    public:
    void show()
    {
        cout<<"enter two value"<<endl;
        cin>>a>>b;
        c=a*b;
        cout<<c;
    }

};

int main(){
    mul a;
    a.show();
    
}