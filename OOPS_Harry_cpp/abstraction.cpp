#include<iostream>
using namespace std;
class a{
    private:
    int a=5;    //hide from the other class and member function ,internal mech.
    public:
    void show(){
        cout<<a;
    }
};
int main(){
    a obj;
    obj.show();
}