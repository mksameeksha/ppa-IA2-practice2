#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter a value");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int composite=0;
  for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      {
        composite+=1;
      }
    }
  return composite;
}
void output(int n, int composite)
{
  if(composite>2)
  {
    printf("the number is composite ");
  }
  else
  {
    printf("the number is not composite ");
  }
}
int main()
{
int n, composite;
  n=input_number();
  composite=is_composite( n);
  output( n,  composite);
  return 0;
}