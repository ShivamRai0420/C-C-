#include<stdio.h>
int main()
{
  float price[3];
  printf("enter price of 1st=");
  scanf("%f",&price[0]);  
  printf("enter price of 2st=");
  scanf("%f",&price[1]);  
  printf("enter price of 3st=");
  scanf("%f",&price[2]);

   printf("total price of 1st=%f\n",price[0]+(0.18*price[0]));
   printf("total price of 2st=%f\n",price[1]+(0.18*price[1]));
   printf("total price of 3st=%f\n",price[2]+(0.18*price[2]));
 
}