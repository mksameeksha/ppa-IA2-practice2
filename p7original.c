#include<stdio.h>
int input_side()
{
  int a;
  printf("Enter the three sides of triangles:\n");
  scanf("%d",&a);
}
int check_scalene(int a, int b, int c)
{
  int isscalene;
  if(a==b || b==c || a==c)
  {
    isscalene=1;
  }
  if(a!=b && b!=c && a!=c)
  {
    isscalene=2;
  }
    return isscalene;
}
void output(int a, int b, int c, int isscalene)
{
  if(isscalene==1)
  {
    printf("Triangle is not scalene");
  }
  else if(isscalene==2)
  {
    printf("Triangle is scalene");
  }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output( a,  b,  c,  isscalene);
  return 0;
}