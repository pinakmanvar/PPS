#include<stdio.h>
#include<string.h>


struct student 
{
char name[100];
char grade;
int roll;
int mark;
};

int main(){
int n,i;
char name[100];

printf("enter the number of students:  ");
scanf("%d",&n);
struct student s[n];


printf(" - - - - - - enter student details - - - - - -\n");
for(i=0;i<n;i++){
printf("enter detail for student %d:",i+1);
printf("\n");
printf("enter name:  ");
getchar();
fgets(s[i].name,100,stdin);
printf("enter roll no:  ");
scanf(" %d",&s[i].roll);
printf("enter grade:  ");
scanf(" %c",&s[i].grade);
printf("enter marks:  ");
scanf(" %d",&s[i].mark);
printf("\n \n \n");

}

printf("- - - - - - student details - - - - - - \n");
for(i=0;i<n;i++){
printf("ROLL NO: %d, NAME: %s, MARKS: %d, GRADE: %c\n",s[i].roll,s[i].name,s[i].mark,s[i].grade);
}
return 0;
}
