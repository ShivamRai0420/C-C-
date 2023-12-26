#include<stdio.h>
int main(){
    int first=0;
    int second=1;
    printf("%d %d",first,second);
    for(int i=1;i<5;i++){
    int temp=first+second;
    first=second;
    second=temp;
    printf(" %d",temp);
    }

}