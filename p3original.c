#include<stdio.h>
int input(){
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int composite(int n){
  int value=0;
  for(int i=1;i<=n/2;i++){
    if(n%i==0)
      value=value + 1;
    else
      value=value;
  }
  return value;
}
void output(int n,int composite){
  if(composite>2)
    printf("%d is composite\n",n);
  else
    printf("%d is prime\n",n);
}
int main(){
  int n=input();
  int p=composite(n);
  output(n,p);
  return 0;
}