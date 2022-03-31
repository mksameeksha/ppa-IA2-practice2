#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the size of array:");
  scanf("%d", &n);
  return n;                                
}
void input_array(int n, int a[n])
{
  int i;
  for( i=1;i<n;i++)
    {
      printf("Enter a value");
      scanf("%d",&a[i]);
    }
}
int is_composit(int n, int a[n])
{
  for(int i=2;i<=n/2;i++)
    {
      if(n%i==0)
        return 1;
    }
   return 0;
}

int sum_composite_numbers(int n, int a[n])
{
  int sum=0;int i;
  for(i=1;i<=n;i++)
    {
     if(is_composit(a[i]))
      {
         sum+=a[i];
      }
    }
  return sum;
}
void out_put(int sum)
{
  printf("the sum is %d",sum);
}
int main()
{
  int n,a[100],composite,sum;
  n=input_array_size();
  input_array( n,  a);
  composite=is_composit( n,  a);
  sum=sum_composite_numbers( n,  a);
  out_put( sum);
  return 0;
}