#include<stdio.h>
int main()
{
  int marks;
  printf("enter marks=");
  scanf("%i",&marks);

  switch(marks)
  {
      case 91 ...100:
      printf("grade a");
      break;
      case 81 ...90:
      printf("grade b");
      break;
      case 71 ...80:
      printf("grade c");
      break;
      case 61 ...70:
      printf("grade d");
      break;
      case 51 ...60:
      printf("grade e");
      break;
     
  }
    return 0;
}    