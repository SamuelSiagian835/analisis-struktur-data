#include <stdio.h>
#include <stdlib.h>

unsigned int sum_1_to_n(unsigned int n);

int main(int argc, char *argv[])
{
  unsigned int n, sum=0;
  n=atoi(argv[1]);
  sum=sum_1_to_n(n);
  printf("sum of 1 to %u=%u\n",n,sum);
  return 0;
}

unsigned int sum_1_to_n(unsigned int n)
{
  unsigned int i,sum=0;
  n--;
  if (n!=0)
  {
    sum=sum_1_to_n(n);
  }
  sum+=n;
  sum++;
  return sum;  
}