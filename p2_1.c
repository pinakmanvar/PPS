#include<stdio.h>
int main()
{
  int a,b,c;

  printf("Enter three values:   ");
  scanf("%d %d %d",&a,&b,&c);

  if(a==b && b==c)
    printf("all three number are equal.");

  else if(a>=b && b==c)
    printf("max nubmer is A.");

  else if(a>=b && a>=c)
    printf("max nubmer is B.");
    
else if(b>=a && b>=c)
    printf("max nubmer is C.");
  
  return 0;
}
