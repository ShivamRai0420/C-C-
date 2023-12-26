//  Q.1 W.A.P TO PRINT REVERSE NUMBER.
//Ans.

#include<stdio.h>
int main()
{
    int n= 1234;
    int rem,rev=0;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
      printf("%i",&rev);

      // cout<<rev;

    return 0;
}