#include<stdio.h>
struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle Triangle;

int input_n()
{
  int x;
  printf("enter the number of triangles\n");
  scanf("%d",&x);
  return x;
}
void input_n_triangles(int n, Triangle t[n])
{
  int i;
  for(i=0 ; i<n ; i++)
  {
		t[i].area=1;
		printf("enter the dimension of base and altitude\n");
  	scanf("%f %f",&t[i].base,&t[i].altitude);
	}	
}
void find_areas_n(int n, Triangle t[n] )
{
  int i;
	t[i].area=0;
  for(i=0 ; i<n ; i++)
  {
		t[i].area = ((t[i].base)*(t[i].altitude))/2 ;
    printf("area of triangle is %.1f \n",t[i].area);
  }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
	for(int i=0;i<n;i++)
		{
		if(t[i].area<t[i+1].area)
			return t[i];
		else
			return t[i+1];
		}
}
void output(int n , Triangle t[n] , Triangle smallest)
{
  printf("The triangle with base= %.1f and altitude=%.1f has smallest area of all\n",smallest.base,smallest.altitude);
}
int main()
{
  int i,n;
  Triangle t[20],smallest;
  n=input_n();
  input_n_triangles(n,t);
  find_areas_n(n,t);
  smallest=find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}