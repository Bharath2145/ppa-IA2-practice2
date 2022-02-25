#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the numbers want to sum of\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("enter the  number\n");
    scanf("%d",&a[i]);
  }
}
int is_composite(int x)
{
  int value,i;
  value=0;
  for(i=1;i<=x/2;i++)
    {
      if(x%i==0)
        value = value+1;
      else 
        value = value;
    }
  return value;
}
int sum_composite(int n, int a[n])
{
  int i, sum;
  sum = 0;
  for(i=0;i<n;i++)
    {
      if(is_composite(a[i])>1)
        sum = sum+a[i];
    }
  return sum;
}
void out_put(int sum_composite)
{
  printf("sum of composite numbers are %d\n", sum_composite);
}
int main()
{
  int n, i, a[i],Sum;
  n=input_array_size();
  input_array(n,a);
  Sum = sum_composite(n,a);
  out_put(Sum);
  return 0;
}