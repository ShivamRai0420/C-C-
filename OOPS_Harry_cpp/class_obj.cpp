#include<iostream>
using namespace std;
class demo{
    private:
    int a,b;
    public:
    void input(){
        cout<<"enter num";
        cin>>a>>b;
    }
    void show(){
        cout<<a<<" "<<b;
    }
};
int main(){
    demo obj;
    obj.input();
    obj.show();
    return 0;
}