
//  Q.1 W.A.P to check 151 NUMBER is " pallin!drom no." or Not.
//Ans.
#include<iostream>
using namespace std;
int main()
{
    int n=157;
    int rem,rev=0;
    int copy=n;

    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(copy==rev)
    {
   cout<<"pallin!drom number ";
    }
    else
      cout<<"Not pallin!drom number  !";


    return 0;
}