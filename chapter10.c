#include<stdio.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main (){
//     FILE *fptr;
// fptr=fopen("numebr.txt","w");
// if(fptr==NULL){
//     printf("file does not exsist\n");
// }
// else{
//     fclose(fptr);
// }

// FILE*fptr;
// fptr=fopen("text.txt","r");
// int ch;
// fscanf(fptr,"%d",&ch);
// printf("charater is %d\n",ch);
// fscanf(fptr,"%d",&ch);
// printf("%d\n",ch);
// fscanf(fptr,"%d",&ch);
// printf("%d\n",ch);
// fscanf(fptr,"%d",&ch);
// printf("%d\n",ch);
// fscanf(fptr,"%d",&ch);
// printf("%d\n",ch);
// fclose(fptr);

// FILE*fptr;
// fptr=fopen("text.txt","a");
// fprintf(fptr,"%c",'M');
// fprintf(fptr,"%c",'A');
// fprintf(fptr,"%c",'N');
// fprintf(fptr,"%c",'G');
// fprintf(fptr,"%c",'O');
// FILE*fptr;
// fptr=fopen("text.txt","w");
// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));
// fputc('M',fptr);
// fputc('A',fptr);
// fputc('N',fptr);
// fputc('G',fptr);
// fputc('O',fptr);
// fclose(fptr);

// FILE *fptr;
// fptr=fopen("text.txt","r");
// char ch;
// ch=fgetc(fptr);
// while(ch!=EOF){
//     printf("%c",ch);
//     ch=fgetc(fptr);
// }
// fclose(fptr);

// FILE *fptr;
// fptr=fopen("text.txt","r");
// int integer;
// fscanf(fptr,"%d",&integer);
// printf("number is %d\n",integer);
// fscanf(fptr,"%d",&integer);
// printf("number is %d\n",integer);
// fscanf(fptr,"%d",&integer);
// printf("number is %d\n",integer);
// fscanf(fptr,"%d",&integer);
// printf("number is %d\n",integer);
// fscanf(fptr,"%d",&integer);
// printf("number is %d\n",integer);
// fclose(fptr);
// FILE *fptr;
// fptr=fopen("text.txt","w");
// struct student n1;
// printf("Enter student details\n");
// scanf("%s",n1.name);
// scanf("%d",&n1.roll);
// scanf("%f",&n1.cgpa);
// fprintf(fptr,"Name of the student is %s\n",n1.name);
// fprintf(fptr,"Roll no of the student is %d\n",n1.roll);
// fprintf(fptr,"CGPA of the student is        %f\n",n1.cgpa);
// fclose(fptr);

// FILE *fptr;
// fptr=fopen("text.txt","w");
// int n;
// printf("enter n ");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
// if(i%2==0){
//     continue;
// }
// fprintf(fptr,"%d\n",i);
// }
// fclose(fptr);

FILE *fptr;
fptr=fopen("text.txt","r");
int a,b;
fscanf(fptr,"%d",&a);
fscanf(fptr,"%d",&b);
fclose(fptr);
fptr=fopen("text.txt","w");
fprintf(fptr,"%d",a+b);
fclose(fptr);
return 0;
}