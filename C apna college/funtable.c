#include<stdio.h>
void printTable(int n);
int main()
{
    int n;
    printf("enter a no.=");
    scanf("%i",&n);
    printTable(n);      //argument/ actual param
    return 0;

}
void printTable(int n)  //parameter/formal param
{
    for(int i=1;i<=10;i++)
    {
        printf("%i\n",i*n);
    }
}