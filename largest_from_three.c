#include<stdio.h>
void main()
{
int a,b,c;
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
