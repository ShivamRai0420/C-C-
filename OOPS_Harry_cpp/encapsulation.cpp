#include<iostream>
using namespace std;
class a{
    // int a,b;
    public:
    void show(){
        cout<<"enter value";
        cin>>a>>b;
        cout<<a<<" "<<b<<endl;
    }
    void sum(){
        cout<<"enter value";
        cin>>a>>b;
        cout<<"sum="<<a+b<<endl;
    }
    private:  
    int a,b;

};
int main(){
    a obj,obj2;
    obj.show();
    obj2.sum();
}