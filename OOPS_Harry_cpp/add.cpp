#include<iostream>
using namespace std;
class add{
    private:
    int a,b,total;
    public:
    void input(){
        cin>>a>>b;
    }
    int show(){
        cout<<a+b;
    }
};
int main(){
    add obj;
    obj.input();
    obj.show();
    return 0;
}