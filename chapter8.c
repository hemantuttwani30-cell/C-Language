#include<stdio.h>
#include<string.h>
// void printstring( char arry[]);
// void printLength(char name[]);
// char strinput(char arry[]);
// void salting(char password[]);
// void slice(char str[],int n,int m);
// void counter(char str[]);
// int counter(char str[]);
// char check(char str[]);
void checkchar(char str[],char ch);
int main(){
//   char firstName[]={"Hemant"};
//   char lastName[]={"Uttwani"};
//   printstring(firstName);
//   printstring(lastName);

// char str[100];
// printf("enter your name : ");
// scanf("%s",fullName);
// printf("your first Name is : %s",fullName);
// fgets(str,100,stdin);
// puts(str);

// char *str= "hello world";
// puts(str);
// str="world";
// puts(str);
//    return 0;

//    char str2[]="hello world";
//    puts(str2);
//    str2="hello";

// char name[]="Hemnat";
// int length=strlen(name);
// printf("%d",length);

// char oldstr[]="first word";
// char newstr[]="second word";
// strcpy(newstr,oldstr);
// printf("%s",newstr);

// char firstStr[100]={"hello"};
// char secondStr[]={"world"};
// strcat(firstStr,secondStr);
// printf("%s",firstStr);

// char class[]={'H','E','M','A','N','T','\0'};
// printf("%s",class);

// char string[20];
// printf("%c",strinput(string));
// return 0;
// // fgets(name,20,stdin);
// // printLength(name);

// }

// char strinput(char arry[]){
//     for(int i=0;arry[i]!='\n';i++){
//         scanf("%c",arry[i]);
//     }

// char str[100];
// char ch;
// int i=0;
// while(ch!='\n'){
//     scanf("%c",&ch);
//     str[i]=ch;
//     i++;
// }
// str[i]='\0';
// printf("%s",str);

// char pass[20];
// char salt[]={"123"};
// fgets(pass,20,stdin);
// pass[strcspn(pass,"\n")]='\0';
// strcat(pass,salt);
// printf("%s",pass);

// char password[200];
// scanf("%s",&password);
// salting(password);

// char str[]="Helloworld";
// slice(str,3,6);
// char str[]="expectro petronum";
// printf("%d",counter(str));

// char str[]="abra ka dabra";
// printf("%d",check(str));

char str[]="HelloWorld";
char ch='x';
checkchar(str,ch);
return 0;
}

void checkchar(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("yes charater was there\n ");
            return;
        }
    }
    printf("charter was not there\n");
}

// char check(char str[]){
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]=='o'){
//             return 1;
//         }
//     }
// }

// int counter(char str[]){
//     int count=0;
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
//             count++;
//         }
//     }
//     return count;
// }

// void counter(char str[]){
//     int counter=0;
//     char ch;
//     for(int i=0;str[i]!='\0';i++){
//         ch =str[i];
//         if(ch=='a'){
//             counter++;
//         }
//         else if(ch=='e'){
//             counter++;
//         }
//         else if(ch=='i'){
//             counter++;
//         }else if(ch=='o'){
//             counter++;
//         }else if(ch=='u'){
//             counter++;
//         }
        
//     }
//     printf("%d",counter);
// }

// void slice(char str[],int n,int m){
//     char newstr[100];
//     int j=0;
//     for(int i=n;i<=m;i++,j++){
//         newstr[j]=str[i];
//     }
//     newstr[j]='\0';
//     printf("%s",newstr);
// }

// void salting(char password[]){
//     char newpass[200];
//     char salt[]="123";
//     strcpy(newpass,password);
//     strcat(newpass,salt);
//     printf("%s",newpass);
// }

// void printLength(char name[]){
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     printf("%d",count-1);
// }


// void printstring( char arry[]){
// for(int i=0;arry[i]!='\0';i++){
//     printf("%c",arry[i]);
// }
// printf("\n");
//}