#include<iostream>
using namespace std;
class mul{
    private:
    int a,b,c;

    public:
    void input(){
        cout<<"enter num";
        cin>>a>>b;
    }
    void process(){
        c=a*b;
    }
    void show(){
        cout<<c;
    }
};
int main(){
    mul obj;
    obj.input();
    obj.process();
    obj.show();
}