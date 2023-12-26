#include<iostream>
using namespace std;
class sum{
    private:
    // int a =5;
    // int b =5;
    int a,b;
   

    public:
    void input()
    {
        cout<<"enter num";
        cin>>a>>b; 
    }
    void show()
    {
        cout<<a+b;
    }

};
int main(){
    sum obj;
    obj.input();
    obj.show();

    return 0;
}