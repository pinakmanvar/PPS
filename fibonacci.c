#include<stdio.h>
int main()
{
  int n1=0;
  int n2=1;
  int n3;
  int i = 0;
  int n;
  
  printf("enter the number of term:   ");
  scanf("%d",&n);
  printf(" \n");
  printf("the fibonacci series is:\n");
 
 
  for(i=0;i<n;i++)
  {
  n3 = n1 + n2;
  printf("%d \n",n3);
  
  n1 = n2;
  n2 = n3;
  }
 


  while (i < n){
  n3 = n1 + n2;
  printf("%d \n",n3);
  
  n1 = n2;
  n2 = n3;
  i++;
  }

  
  do{
  n3 = n1 + n2;
  printf("%d \n",n3);
  
  n1 = n2;
  n2 = n3;
  i++;
  }while(i<n);
  
  
  return 0;
}
