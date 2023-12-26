
#include<iostream>
using namespace std;
int getLength(char arr[])
{
    int index=0;
    int length=0;
    while(arr[index]!='\0')
    {
        length++;
        index++;
    }
    return length;
}  
int main()
{
    char name[10]="shivam";
    cout<<name<<endl;
    cout<<"length is="<<getLength(name)<<endl;
}  
