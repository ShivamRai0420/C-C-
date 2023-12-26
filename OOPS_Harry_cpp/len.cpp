#include<iostream>
#include<cstring>
using namespace std;
int getlen(char name[]){
    int l=0;
    int i=0;
    while(name[i]!='\0'){
        i++;
        l++;
    }
    return l;
}
int main(){
    char name[]="shivam";
    int len=strlen(name);
    cout<<"len="<<len;
    // cout<<getlen(name);
}