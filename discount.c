#include<stdio.h>
int main()
{
  const int P1=100;
  const int P2=200;
  const int P3=300;
  const int P4=400;
  const int P5=500;

  int a,b,c,d,e;

  printf("   \n");
  printf("   \n"); 

  printf("~~~~~~~~~~~~~~~ BILLING SYSTEM ~~~~~~~~~~~~~~~");
  printf("   \n");
  printf("   \n");

  printf("Product list:- \n");
  printf("P1: YOUVA 172 PAGES NOTEBOOK - Rs. 100\n");
  printf("P2: DOMS DRAWING KIT         - Rs. 200\n");
  printf("P3: EGD DRAWING KIT          - Rs. 300\n");
  printf("P4: PARKER SIGN PEN          - Rs. 400\n");
  printf("P5: PENTEL 1000 MEC. PENCIL  - Rs. 500\n");

  printf("   \n");
  printf("   \n");

  printf("Enter the quantity of P1:     ");
  scanf("%d",&a);
  printf("Enter the quantity of P2:     ");
  scanf("%d",&b);
  printf("Enter the quantity of P3:     ");
  scanf("%d",&c);
  printf("Enter the quantity of P4:     ");
  scanf("%d",&d);
  printf("Enter the quantity of P5:     ");
  scanf("%d",&e);
  
  printf("   \n");
  printf("   \n");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
  
  printf("   \n");
  printf("   \n");
  
  int p = P1*a;
  int q = P2*b;
  int r = P3*c;
  int s = P4*d;
  int t = P5*e;
  
  int total = p + q + r + s + t;
  printf("total bill is:     %d\n", total);
  
  if(total>1000 && total<10001)
  {
      float x = 5.0;
      float y = total * x;
      int m =y/100;
      int act = total - m;
      printf("discount:          %d\n",m);
      printf("final bill is:     %d\n",act);
  }
  
  if(total>10000 && total<15001)
  {
      float x = 7.0;
      float y = total * x;
      int m =y/100;
      int act = total - m;
      printf("discount:          %d\n",m);
      printf("final bill is:     %d\n",act);
  }    
  
   if(total>15000 && total<20001)
  {
      float x = 9.0;
      float y = total * x;
      int m =y/100;
      int act = total - m;
      printf("discount:          %d\n",m);
      printf("final bill is:     %d\n",act);
  }  
  
    if(total>20000)
  {
      float x = 12.0;
      float y = total * x;
      int m =y/100;
      int act = total - m;
      printf("discount:          %d\n",m);
      printf("final bill is:     %d\n",act);
  }  
  
  
printf("   \n");
printf("   \n"); 

printf("~~~~~~~~~~~~~~~ THANKYOU! VISIT AGAIN ~~~~~~~~~~~~~~~~~\n");

printf("   \n");
printf("   \n"); 

return 0;
}
