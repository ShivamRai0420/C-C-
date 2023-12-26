#include<iostream>
using namespace std;
/*class test{
    public:
    test(){
        int n=2;
        cout<<n<<endl;
    }
    ~test(){
        cout<<"object destroyed";
    }
};
int main(){
    test obj;
}*/

//copy and parameterized constructor
class A{
    int a,b;
    public:
    A(int x,int y)  //parameterize const
    {
        a=x;
        b=y;
    }
    A(A &ref)       //copy constructor
    {
        a=ref.a;
        b=ref.b;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    A obj(10,20);
    A obj2=obj;
    obj.show();
    obj2.show();
}