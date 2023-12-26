#include<stdio.h>
void printNamaste();
void printBonjour();

int main()
{
    char ch;
    printf("enter f for french and i for indian:");
    scanf("%c",&ch);
    if(ch=='i')
    {
        printNamaste();
    }
    else
    {
      printBonjour();
    }
}

void printNamaste()
{
        printf("Namaste\n"); 
}
void printBonjour()
{

        printf("Bonjour\n");
    
}