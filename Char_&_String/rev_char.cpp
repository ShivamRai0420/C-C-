#include<iostream>
#include<cstring>
using namespace std;
void reverse(char arr[]){
    int l=strlen(arr);
    int s=0;
    int e=l-1;
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main(){
char name[10]="shivam";
reverse(name);
cout<<"rev=" <<name;
}