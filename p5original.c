#include<stdio.h>
int input()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int gcd(int a, int b)
{
  int i, x, t;
  x=0;
  if(a>b)
  {
    t=a;
    a=b;
    b=t;
  }
  if(b%a==0)
    return a;
  {
    for(i=1;i<a/2;i++)
      {
        (a%i==0 && b%i == 0);
        x=i;
      }
  }
  return x;
}
void output(int a, int b, int gcd)
{
  printf("%d is GCD of %d and %d\n", gcd, a, b);
}
int main()
{
  int a, b, result;
  a=input();
  b=input();
  result=gcd(a, b);
  output(a, b, result);  
  return 0;
}