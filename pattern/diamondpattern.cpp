#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int row=1;row<=n;row++)
    {
        //space
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }
        //star
        for(int col=1;col<=row;col++){
            cout<<" *";
        }

        cout<<endl;

    }
    int n2=5;
    for(int row=1;row<=n2;row++)
    {
        //space
        for(int col=1;col<=row-1;col++){
            cout<<" ";
        }
        //star
        for(int col=1;col<=n2-row+1;col++){
            cout<<" *";
        }

        cout<<endl;

    }

}