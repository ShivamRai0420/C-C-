#include<iostream>
using namespace std;

// int squareofNumber(int n)
// {
//     for(int i=1;i<=n;i++){
//         cout<<n*i<<" "<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n=5;
//     squareofNumber(n);
// }

int getFact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
      fact=fact*i; 
    }
    cout<< fact;
    return 0;

}
int main(){
    int n=5;
    getFact(n);
}