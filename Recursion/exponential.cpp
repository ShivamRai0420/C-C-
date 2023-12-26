#include<iostream>
using namespace std;
int expo(int n){
    //base case
    if(n==0){
        return 1;
    }
    int smallerProbAns=expo(n/2);
    if(n&1)
    {
        return smallerProbAns*smallerProbAns*2;
    }
    else{
        return smallerProbAns*smallerProbAns;
    }
}

int main()
{
    cout<<"ans is "<<expo(11)<<endl;
    return 0;
}