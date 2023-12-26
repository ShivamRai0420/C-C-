#include<iostream>
#include<cstring>
using namespace std;

int main(){
   char s[10]="babbar";
   int count=0;
   for(int i=0;s[i]!='\0';i++)      //null char='\0'
   {
      count++;
   }
   cout<< count;
   //  cout<< strlen(s);
}