#include<iostream>
#include<cstring>
using namespace std;

void getRev(char name[])
{
    int l=strlen(name);
    int s=0;
    int e=l-1;
    while(s<=e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
int main(){
    char name[10]="shivam";
    getRev(name);
    cout<<"rev is="<<name;

}