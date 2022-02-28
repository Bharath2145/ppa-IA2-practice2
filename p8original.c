#include<stdio.h>
struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
  int n;
  printf("enter the number of triangles to find smalles among them\n");
  scanf("%d", &n);
  return n;  
}
void input_n_triangles(int n, Triangle t[n])
{
 int i;
 for(i=0;i<n;i++)
  {
    t[i].area=1;
    printf("enter the base and altitude of the triangle\n");
    scanf("%f %f",&t[i].base,&t[i].altitude);
  }
}
void find_area_n(int n,Triangle t[n])
{
  int i;
  t[i].area=0;
  for(i=0;i<n;i++)
    {
      t[i].area=((t[i].base)*(t[i].altitude))/2;
      printf("area of triangle is %.1f\n",t[i].area);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
  {
    if(t[i].area<t[i+1].area)
    return t[i].area;
    else
    return t[i+1].area;
  }   
}
void output(int n,Triangle t[n], Triangle smallest)
{
  printf("the triangle with base %.1f and altitude %.1f has the smallest area of all\n",smallest.base, smallest.altitude);
}
int main()
{
  int i, n;
  Triangle t[20].smallest;
  n= input_n();
  input_n_triangle(n,t);
  find_area_n(n,t);
  smallest = find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}