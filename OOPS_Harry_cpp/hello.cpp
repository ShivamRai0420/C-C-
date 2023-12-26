#include <iostream> //preprocessor
using namespace std;
int main()
{
    //     cout<<"hello"<<endl;
    //     /*cout<<"hello";
    //     cout<<"hello";*/    //multiple line comment

    // //camelcase Notation
    //     int marksInmath=8;
    //     cout<<marksInmath<<endl;

    // // const value doesn't chnge
    //     int const score=50;
    //     cout<<score<<endl;
    //     return 0;

    // // take input in cpp
    // int a,b;
    // cout<<"enter 1st no."<<endl;
    // cin>>a;

    // cout<<"enter 2nd no."<<endl;
    // cin>>b;
    // cout<<"sum="<<a+b <<endl;
    // cout<<"divide="<<(float)a/b <<endl;     //typecasting

    // switch
    // int age;
    // cout << "enter age" << endl;
    // cin >> age;
    // switch (age)
    // {
    // case 18:
    //     cout << "eligible" << endl;
    //     break;

    // case 17:
    //     cout << "not eligible" << endl;
    //     break;

    // default:
    //     cout << "not" << endl;
    //     break;
    // }

    //while loop
    // int index=0;
    // while(index<=10){
    //     cout<<"we are at index no."<<index<<endl;
    //     index=index+1;
    // }

    //while loop
    // int index=0;
    // do{
    //     cout<<"we are at index no."<<index<<endl;
    //     index=index+1;
    // }
    // while(index<=10);

    //for loop
    // for(int i=0; i<10;i++){
    //     cout<<"value of i is"<<i<<endl;
    // }

    //array
    // int array[3]={1,4,2};
    // cout<<array[2];

    // int marks[10];
    // for(int i=0;i<10;i++){
    //     cout<<"enter marks "<<i <<" th std"<<endl;
    //     cin>>marks[i];
    // }
    // for(int i=0;i<10;i++){
    //     cout<<"marks of" <<i<<"th std is"<<marks[i]<<endl;
    // }

    //2D Array
    // int arr2d[2][3]={
    //     {1,2,3},
    //     {4,5,6}
    // };
    // for (int i = 0; i <2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //        cout<<"the value at"<<i<<","<<j<<" is"<<arr2d[i][j]<<endl; 
    //     }
        
    // }
    
    //string
    // string name="shivam";
    // cout<<"the name is "<<name<<endl; 
    // cout<<"the name is "<<name.length()<<endl; 
    // cout<<"the name is "<<name.substr(0,3)<<endl; 
    // cout<<"the name is "<<name.substr(2,3)<<endl; 

    //pointers
    // int a=34;
    // int* ptr;
    // ptr=&a;
    // cout<<"the value of a is"<<a<<endl;
    // cout<<"the value of a is"<<*ptr<<endl;
    // cout<<"the address of a is"<<&a<<endl;
    // cout<<"the address of a is"<<ptr<<endl;

    //classes and object
    class Employee{
        public:
        string name;
        int salary;

        void printdetails(){
         cout<<"the na e of our 1st emp is" <<this->name<<endl<<"and salary is"<<this->salary<<endl;
        }
    };
    Employee har;
    har.name="harry";
    har.salary=100;
    har.printdetails();
}