#include<stdio.h>
// int main(){
    // int age =22;
    // int* prt=&age;
    // int _age=*prt;
    // printf("%d",_age);
    // printf("%p\n",&age);
    // printf("%p\n",prt);
    // printf("%p\n",&prt);
    // printf("%d\n",age);
    // printf("%d\n",*prt);
    // printf("%d\n",*(&age));
    // int *prt;
    // int x;
    // prt=&x;
    // *prt=0;
    // printf("value of x is%d\n",x);
    // printf("value of *prt %d\n",*prt);
    // *prt+=5;
    // printf("value of x is%d\n",x);
    // printf("value of *prt %d\n",*prt);
    // (*prt)++;
    // printf("value of x is%d\n",x);
    // printf("value of *prt %d\n",*prt);
    // int i=100;
    // int*ptr=&i;
    // int**pptr=& ptr;
    // printf("%d",**pptr);
    // return 0;

    // void square( int a);
    // void _square(int *a);
    // int main(){
    //     int a;
    //     printf("enter a ");
    //     scanf("%d",&a);
    //     square(a);
    //     printf("number is %d\n",a);
    //     _square(&a);
    //     printf("number is :%d\n",a);
    // }
    // void square(int a){
    //     a=a*a;
    //     printf("square is :%d\n",a);
    // }
    // void _square(int *a){
    //     *a=(*a)*(*a);
    //     printf("square is :%d\n",*a);
    // }

    // void swap(int a, int b);
    // void _swap(int *a,int *b);
    // int main (){
    //     int x=3,y=5;
    //     swap(x,y);
    //     printf("x=%d,y=%d\n",x,y);
    //     _swap(&x,&y);
    //     printf("x=%d,y=%d\n",x,y);
    //     return 0;
    // }
    // void _swap(int *a, int *b){
    //     int t=*a;
    //     *a=*b;
    //     *b=t;
       
    // }
    // void swap(int a, int b){
    //     int t=a;
    //     a=b;
    //     b=t;
    //     printf("a=%d,b=%d\n",a,b);
    // }

    // void printAddress(int *n);
    // int main (){
    //     int n=4;
    //     printAddress(&n);
    //     printf("%u\n",&n);
    //     return 0;

    // }
    // void printAddress(int *n){
    //     printf("%u\n",n);
    // }
void work(int a, int b,int *sum,int *product,int *avg );
int main(){
    int a=2,b=4;
    int sum,product,avg;
    work(a,b,&sum,&product,&avg);
    printf("sum =%d,avg=%d,product =%d",sum,avg,product);
    return 0;
}
void work(int a, int b,int *sum,int *product,int *avg ){
    *sum=a+b;
    *product=a*b;
    *avg=(a+b)/2;
}