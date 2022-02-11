#include<stdio.h>
void input(float base, float height)
{
  printf("enter the base and height of the triangle\n");
  scanf("%f%f",&base, &height);
}
void find_area(float base , float height, float area)
{
  area = 0.5*(base*height);
}
 void output(float base, float height, float *area)
{
 printf("area of the trainagle base %f and height %f is %f\n", base, height, area);
}
void main()
{
 float base, height, area;
  input(base, height);
  output(base, height, &area);
}
 