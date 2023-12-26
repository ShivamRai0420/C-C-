#include <iostream>
using namespace std;
int checkArmstrng(int n)
{
    int rem;
    int copy = n;
    int sum = 0;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    if (copy == sum)
    {
        cout << "armstrng";
    }
    else
    {
        cout << "Not armstrng";
    }
}
int main()
{
    int n = 371;
    checkArmstrng(n);
}