#include<stdio.h>
struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle triangle;
int input_n()
{
  int n;
  printf("enter the number of triangles to find smalles among them\n");
  scanf("%d", &n);
  return n;  
}
void input_n_triangles(int n, triangle t[n])
{
 int i;
 for(i=0;i<n;i++)
  {
    t[i].area=1;
    printf("enter the base and altitude of the triangle\n");
    scanf("%f %f",&t[i].base,&t[i].altitude);
  }
}
void find_area_n(int n,trianglet[n])
{
  int i;
  t[i].area=0;
  for(i=0;i<n;i++)
    {
      t[i].area=((t[i].base)*(t[i].altidue))/2;
      printf("area of triangle is %f\n",t[i].area);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  for(i=0;i<n;i++)
    {
      if(t[i])
    }
    
}
void output(int n,triangle t[n], triangle smallest)
{
  printf("the triangle with base %f and altitude %f has the smallest of all\n",smallest.base, smallest.altitude);
}
int main()
{
  triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}