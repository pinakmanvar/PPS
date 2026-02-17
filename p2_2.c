#include<stdio.h>
int main()
{
  int m1,m2,m3,m4,m5,total,actual = 350;
  float per;
  
  printf("~~~~~~~~~~~~ STUDENT MARKSHEET ~~~~~~~~~~~~~~\n");
  printf("\n");

  printf("Enter the marks in physics:     ");
  scanf("%d",&m1);
  
  printf("Enter the marks in chemistry:   ");
  scanf("%d",&m2);
  
  printf("Enter the marks in maths:       ");
  scanf("%d",&m3);
  
  printf("Enter the marks in english:     ");
  scanf("%d",&m4);
  
  printf("Enter the marks in computer:    ");
  scanf("%d",&m5);
  
  printf("\n");
  
  if(m1 >= 0 && m1 <= 70 && m2 >= 0 && m2 <= 70 && m3 >= 0 && m3 <= 70 && m4 >= 0 && m4 <= 70 && m5 >= 0 && m5 <= 70){
  
  total = m1 + m2 + m3 + m4 + m5;
  per = total / 3.5;

  printf("total marks:       350\n");
  printf("obtained marks:    %d\n",total);
  printf("percentage:        %f\n",per);
  printf("\n");
  
    if(per >= 90.0){
    printf("result:            PASS\n");
    printf("obtained grade:    A\n");
    }
  
    if(per >= 75.0 && per < 90.0){
    printf("result:            PASS\n");
    printf("obtained grade:    B\n");
    }
  
    if(per >= 60.0 && per < 75.0){
    printf("result:            PASS\n");
    printf("obtained grade:    C\n");
    }
  
    if(per >= 40.0 && per < 60.0){
    printf("result:            PASS\n");
    printf("obtained grade:    D\n");
    }
    
    if(per < 40.0){
    printf("result:            FAIL\n");
    printf("obtained grade:    F\n");
    }
    
  printf("\n");
  }
  

  
  else{
  printf("\n");
  printf("the marks you enter must not exceed above 70, please re-run the program and enter the marks correctly \n");
  }

return 0;
}
