#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=1;row<=n;row++){
        //space
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }
        //star
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // for printing Barfi
    for(int row=1;row<=n;row++){
        //space
        for(int col=1;col<=row;col++){
            cout<<" ";
        }
        //star
        for(int col=1;col<=n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //Hollow Sphere
    // for(int row=1;row<=n;row++){
    //     //star
        
    //     if(row==1;row<=n;row++)
    //     {
    //         for(int col=1;col<=row;col++){
    //         cout<<"* ";
    //     }}
    //     for(int col=1;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
}