#include<stdio.h>
int input()
{
  int a;
  printf("Enter two numbers:");
  scanf("%d",&a);
  return a;
}
int gc_d(int a, int b)
{
  int gcd;
  for(int i=1;i<=a && i<=b;i++)
    {
      if(a%i==0&&b%i==0)
      gcd=i;
    }
  return gcd;
}
void output(int a, int b, int gcd)
{
  printf("output is %d\n",gcd);
}
int main()
{
  int a,b,gcd;
  a=input();
  b=input();
  gcd=gc_d(a,b);
  output(a,b,gcd);
  return 0;
}