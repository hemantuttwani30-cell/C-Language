#include<stdio.h>
#include<string.h>
// typedef struct computerenginerringstudent{
//     char name[100];
//     int rollno;
//     float cgpa;
// } coe ;

// struct address{
// int houseno;
// int blockno;
// char city[100];
// char state[100];
// } ;

// void printadd(struct address people);

// struct vector{
//     int x; 
//     int y;
// };
// void vectorsum(struct vector v1,struct vector v2,struct vector sum);

// void printinfo(struct student s1);

// struct complex{
//     int real;
//     int imag;
// };
// void print(struct complex n1);

typedef struct bankdetails{
    char name[100];
    int accno;
}bd;

void printbd(struct bankdetails b1);
int main(){
    bd b1;
printf("enter your name");
scanf("%s",&b1.name);
printf("enter your bank account no");
scanf("%d",&b1.accno);
printbd(b1);

 
    // struct student s1;
    // s1.rollno=12;
    // s1.cgpa=9.2;
    // //s1.name=Hemant;
    // strcpy(s1.name,"Hemant");
    // printf("student name is : %s\n",s1.name);
    // printf("roll no is : %d\n",s1.rollno);
    // printf("cgpa is : %f\n",s1.cgpa);

    // struct student s2;
    // s2.rollno=13;
    // s2.cgpa=9.3;
    // strcpy(s2.name,"sharadha");
    // printf("%s\n",s2.name);
    // printf("%d\n",s2.rollno);
    // printf("%f\n",s2.cgpa);

    // struct student s3;
    // s3.rollno=13;
    // s3.cgpa=1.2;
    // //s1.name=Hemant;
    // strcpy(s3.name,"Ramdev baba");
    // printf("student name is : %s\n",s3.name);
    // printf("roll no is : %d\n",s3.rollno);
    // printf("cgpa is : %f\n",s3.cgpa);
    // struct student ece[100];
    // ece[0].rollno=1664;
    // ece[0].cgpa=9.0;
    // strcpy(ece[0].name,"Hemant");
    // printf("name: %s",ece[0].name);
    // printf("cgpa : %f",ece[0].cgpa);
    // printf("roll no . : %d",ece[0].rollno);

    // coe s1={"Hemnat",1334,8.9};
    // printf(" student roll no is : %d\n",s1.rollno);

    // struct student*ptr=&s1;
    // printf("roll no is : %d\n",(*ptr).rollno);
    // printf("student name is : %s\n",ptr->name);
    // printf("student cgpa is : %f",ptr->cgpa);
    // printinfo(s1);
    // printf("%s",s1.name);

    // struct address people[5];
    // printf("enter info of first person : ");
    // scanf("%d",&people[0].houseno);
    // scanf("%d",&people[0].blockno);
    // scanf(" %s",people[0].city);
    // scanf(" %s",people[0].state);

    // printf("enter info of second person : ");
    // scanf("%d",&people[1].houseno);
    // scanf("%d",&people[1].blockno);
    // scanf(" %s",people[1].city);
    // scanf(" %s",people[1].state);

    // printf("enter info of third person : ");
    // scanf("%d",&people[2].houseno);
    // scanf("%d",&people[2].blockno);
    // scanf(" %s",people[2].city);
    // scanf(" %s",people[2].state);

    // printf("enter info of fourth person : ");
    // scanf("%d",&people[3].houseno);
    // scanf("%d",&people[3].blockno);
    // scanf(" %s",people[3].city);
    // scanf(" %s",people[3].state);

    // printf("enter info of fifth person : ");
    // scanf("%d",&people[4].houseno);
    // scanf("%d",&people[4].blockno);
    // scanf(" %s",people[4].city);
    // scanf(" %s",people[4].state);

    // printadd(people[0]);
    // printadd(people[1]);
    // printadd(people[2]);
    // printadd(people[3]);
    // printadd(people[4]);

    // struct vector v1={3,5};
    // struct vector v2={4,6};
    // struct vector sum={0};
    // vectorsum(v1,v2,sum);

    // struct complex n1={3,4};
    // struct complex *ptr=&n1;
    //  printf("real part is %d\n,imaginar part is %d",ptr->real,ptr->imag);
    

    return 0;
}
void printbd(struct bankdetails b1){
printf("name of account holder is %s\n",b1.name);
printf("your account no is %d",b1.accno);
}

// void print(struct complex n1){
//    printf("real part is %d,imaginar part is %d",n1.real,n1.imag);
// }

// void vectorsum(struct vector v1,struct vector v2,struct vector sum){
//     sum.x=v1.x+v2.x;
//     sum.y=v1.y+v2.y;

//     printf("x component of final vector is :%d,y component of final vector is : %d",sum.x,sum.y);
// }

// void printadd(struct address  people){
//     printf("%d,%d,%s,%s\n",people.houseno,people.blockno,people.city,people.state);
// }

// void printinfo(struct student s1){
//     printf("student info : \n");
//      printf("roll no is : %d\n",s1.rollno);
//     printf("student name is : %s\n",s1.name);
//     printf("student cgpa is : %f",s1.cgpa);
//}