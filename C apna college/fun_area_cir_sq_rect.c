#include<stdio.h>
#include<math.h>
float areaofSquare(float side);
float areaofCircle(float rad);
float areaofRectangle(float a,float b);

int main()
{
    float a =5.0;
    float b =6.0;
    float rad=2;
    float side=2;
    printf("area of square is %f\n",areaofSquare(side));
    printf("area of circle is %f\n",areaofCircle(rad));
    printf("area of rectangle is %f\n",areaofRectangle(a,b));
    return 0;
}

float areaofSquare(float side)
{
  return side*side;   
}
float areaofCircle(float rad) 
{
  return 3.14*rad*rad;   
}
float areaofRectangle(float a, float b)
{
  return a*b;   
}

