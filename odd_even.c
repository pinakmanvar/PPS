#include<stdio.h>
int main()
{
  int n;
  int r;
  
  printf("enter the number:   ");
  scanf("%d",&n);
  
  r = n%2;
  
  if(r == 0)
  {
  printf("the number %d is even.",n);
  }
  else
  {
  printf("the number %d is odd.\n",n);
  }
  return 0;
}
