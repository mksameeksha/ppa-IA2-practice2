#include <stdio.h>
int input_side()
{
 int a;
  printf("Enter three sides of triangle: ");
  scanf("%d", &a);
  return a;
}
 int check_scalene(int a, int b, int c)
{
  int isscalene;
if(a==b && b==c) 
{
isscalene=a;
}
else if(a==b || a==c || b==c) 
{
  isscalene=b;
}
else 
{
 isscalene=c;
}
return isscalene;
}
void output(int a, int b, int c,int isscalene)
{
  if(isscalene==a)
  {
  printf("Equilateral triangle.");
  }
  else if(isscalene==b)
  {
   printf("Isosceles triangle.");
  }
  else 
  {
  printf("Scalene triangle.");
  }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene( a,  b,  c);
  output( a,  b,  c, isscalene);
    return 0;
}