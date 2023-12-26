#include<iostream>
using namespace std;
//  **function overloading
// class apnacollege{
//     public:
//     void fun(){
//         cout<<"fun with no arguments\n";
//     }
//     void fun(int x){
//         cout<<"fun with  arguments\n";
//     }

// };
// int main(){
//     apnacollege obj;
//     obj.fun();
//     obj.fun(5);
// }

//  **function overriding
class a{
    public:
    virtual void show(){
        cout<<"base class";
    }
};
class b:public a{
    public:
    void show(){
        cout<<"derive class";
    }
};
int main(){
    a *p;
    b obj;
    p=&obj;
    p->show();
}