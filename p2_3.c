#include<stdio.h>

int oddeven(int n){
 
}

int posneg(int n){printf("\n");
  i
  }


int greatest(int a, int b, int c){

  printf("enter first integer a:   ");
  scanf("%d",&a);

  printf("enter second integer b:   ");
  scanf("%d",&b);

  printf("enter third integer c:   ");
  scanf("%d",&c);

  if(a==b && b==c){
  printf("integer a(%d), b(%d) and c(%d) are equal. \n",a,b,c);
  }else
  {
  if(a==b){
  printf("integer a(%d) and b(%d) are equal. \n",a,b);
  }
  if(b==c){
  printf("integer b(%d) and c(%d) are equal. \n",b,c);
  }
  if(a==c){
  printf("integer a(%d) and c(%d) are equal. \n",a,c);
  }
  }

  if(a<b && b<c){
  printf("integer %d is the greatest.     %d < %d < %d \n",c,a,b,c);
  }
  if(a<b && b>c){
  printf("integer %d is the greatest.     %d < %d < %d \n",b,a,c,b);
  }
  if(a>b && a<c){
  printf("integer %d is the greatest.     %d < %d < %d \n",c,b,a,c);
  }
  if(a>b && a<c){
  printf("integer %d is the greatest.     %d < %d < %d \n",a,b,c,a);
  }
}

int sumofdig(int n){
  int sum = 0;
  int r;
  printf("enter the number:    ");
  scanf("%d",&n);
  
  printf("\n");
  
  while(n != 0){
  
  r = n % 10;
  n = n / 10;
  sum = sum + r;
  
  }

  printf("the sum of all the digits is:     %d \n", sum);
}






int main()
{
  int i;
  printf("\n");
  printf("select the respective number to perform the operations.");
  printf(" \n");
  printf("enter (1) to check if number is odd or even.\n");
  printf("enter (2) to check if the number is positive or negative\n");
  printf("enter (3) to find the greatest number out of three numbers.\n");
  printf("enter (4) to find the sum of digit of a number.\n");
  printf("enter (5) to exit the program.\n");
printf("\n"); printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("\n");

printf("enter the number of the respective program you want to use:   ");
scanf("%d",&i);

if(i==1){

  printf
  if(n%2==0){
    printf("the number %d is even.",n);
    }
  else{
    printf("the number %d is odd.",n);
    }
}

