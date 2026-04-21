#include<stdio.h>
#include<stdlib.h>

#define FN 50
#define FT 500

void writefile(){          //this function creates a file named by user in write mode and allows user to add data in the file
  char filename[FN],text[FT];

  printf("enter file name:  ");
  scanf("%s",filename);
  
  FILE *fp = fopen(filename,"w");
  
  if(fp == NULL){
    printf("File creation failed!");
    return;
    }
  
  printf("enter text to add in the file:    ");
  getchar();
  //fflush(stdout);
  fgets(text,FT,stdin);
  
  fprintf(fp,"%s",text);
  fclose(fp);
  
  printf("file ""%s"" has been made and written successfully.\n",filename);
}

void readfile(){        //this function opens file in read mode 
  char filename[FN],ch;
  
  printf("Enter file name:   ");
  scanf("%s",filename);
  FILE *fp = fopen(filename,"r");
  
  if(fp == NULL){
      printf("file not found.");
      return;
      }
      
  while((ch = fgetc(fp))!= EOF)
    printf("%c",ch);
}

void appendfile(){          //this function will let user append the file 
  char filename[FN],text[FT];
  
  printf("Enter file name:   ");
  scanf("%s",filename);
  FILE *fp = fopen(filename,"a");
  getchar();
  if(fp == NULL)
    printf("unable to open file.");
  
  printf("enter text to be appended:   ");
  fgets(text,FT,stdin);
  
  fprintf(fp,"%s",text);
  fclose(fp);
  
  printf("file"" %s "" changes have been appended successfully.\n",filename);
}

void deletecontent(){       //this function will delete file content
  char filename[FN];
  printf("Enter file name:   ");
  scanf("%s",filename);
  
  FILE *fp = fopen(filename,"w");
  
  if(fp == NULL)
    printf("unable to open file.");
    
  printf("content of the file '%s' has been deleted.",filename);
}

int main()
{
  int choice;
  do{
  printf("\n");
  printf("\n");
  printf("~ ~ ~ ~ ~ F I L E   O P E R A T I O N S ~ ~ ~ ~ ~\n");
  printf("\n");
  printf("1. Create a file.\n"); 
  printf("2. Read a file.\n");
  printf("3. Append a file.\n");
  printf("4. Delete content from file.\n");
  printf("5. Exit the program.\n");
  printf("\n");
  printf("\n");
  printf("enter your choice from above:\n");
  scanf("%d",&choice);
  
  if(choice <= 5 || choice >= 1){
    
      switch(choice){
       case 1:
       writefile();
       break;
       
       case 2:
       readfile();
       break;
       
       case 3:
       appendfile();
       break;
       
       case 4:
       deletecontent();
       break;
       
       case 5:
       printf("exiting the program....");
       }
    }
  else{
    printf("Please enter valid choice between 1 to 5.");
    }
  }
  while(choice != 5);
  
return 0;
}
