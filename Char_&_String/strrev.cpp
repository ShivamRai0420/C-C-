#include<iostream>
using namespace std;
#include<string.h>
int main(){
    char s[10]="shivam";
    int l=strlen(s);
    int st=0;
    int e=l-1;
    while(st<=e){
        swap(s[st],s[e]);
        st++;
        e--;
    }
    cout<<s;
}    