// //Pointer:- Pointer that store address of some other variable.

#include<iostream>
using namespace std;
// int main(){
// int a=5;
// int *p=&a;
// cout <<&a<<endl;              //address=0*61ff0c
// cout<<p<<endl;                  //address of a
// cout<<&p<<endl;                  //address of p=0*61ff08
// cout<<*p<<endl;                  // Value store at address pointed by p=5
// cout<<sizeof(p)<<endl;              // size=4 or 8
// // cout<<*a;            //error
// }

// Pointers Array

// int main(){
    // int arr[]={1,2,3,4};
//     cout<<arr<<endl;
//     cout<<&arr[0]<<endl;
//     cout<<*arr<<endl;               //arr[0]=1;  
//     cout<<*(arr+1)<<endl;               //arr[0]=1;  and *(arr+1)=arr[1]=2
    // cout<<*arr<<" "<<*(arr+3);
        
// }

// Character Array

// int main()
// {
//     char ch[]="abcd";
//     char *p=ch;
//     cout<<*p<<endl;
// }

// Double Pointer

int main()
{
    int a=5;
    int *p=&a;
    int **q=&p;

    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;

}
