#include<iostream>
using namespace std;
int main()
{
   int num;
   cout<<"enter num=";
   cin>>num; 

   switch(num)
   {
       case 1: cout<<"sunday"<<endl;
       break;
       case 2: cout<<"monnday"<<endl;
       break;
       case 3: cout<<"tueday"<<endl;
       break;
       case 4: cout<<"wedday"<<endl;
       break;
       case 5: cout<<"thursday"<<endl;
       break;
       case 6: cout<<"friday"<<endl;
       break;
       default: cout<<"no";
   }
   return 0;

}