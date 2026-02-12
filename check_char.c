#include<stdio.h>
void main()

{
char ch;

printf("Enter an character:  ");
scanf("%c",&ch);

int as=ch;

if(as >= 32 && as <= 47 || as >= 58 && as <= 64 || as >= 91 && as <= 96 || as >= 123 && as <= 127){
printf("The character %c is a special symbol.\n",ch);
}

if(as >= 48 && as <= 57){
printf("The character %c is a number.\n",ch);
}

if(as >= 65 && as <= 90){
printf("The character %c is a uppercase alphabet.\n",ch);
}

if(as >= 97 && as <= 122){
printf("The character %c is a lowercase alphabet.\n",ch);
}

}
