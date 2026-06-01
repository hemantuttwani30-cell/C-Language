#include<stdio.h>
// void printhello();
// int main(){
// printhello();
// printhello();

// }

// void printhello(){
//     printf("Hello!\n");
// }

// void Hello();
// void Goodbye();
// int main(){
//     Hello();
//     Goodbye();
//     Hello();
// }
// void Hello(){
//     printf("Hello!\n");
// }
// void Goodbye(){
//     printf("Good bye\n");
// }

// void Namste();
// void Bonjour();
// int main(){
//     char x;
//     printf("enter Nationality");
//     scanf("%s",& x);
//     if(x=='i'){
//         Namste();
//     } else{
//         Bonjour();
//     }
// }
// void Namste(){
//     printf("Namste\n");
//     Bonjour();
// }
// void Bonjour(){
//     printf("Bonjour\n");
// }

// int sum(int a,int b);
// int main(){
//     int a,b;
//     printf("enter a ");
//     scanf("%d",& a);
//     printf("enter b ");
//     scanf("%d",&b);
//     int c= sum(a,b);
//     printf("%d",c);
//     return 0;
// }

// int sum(int a, int b){
//     return a+b;
// }

// void printtable(int n);
// int main(){
//     int n;
//     printf("enter number ");
//     scanf("%d",&n);
//     printtable( n);

// }
// void printtable(int n){
//     for(int i=1;i<=10;i++){
//         printf("%d\n",i*n);
//     }
// }

// void calculateprice(float value);
// int main(){
// float value=100;
// calculateprice(value);
// return 0;
// }

// void calculateprice(float value){
//     value+=0.18*value;
//     printf("%f", value);
// }

// #include<math.h>
// int main(){
//     int a,b;
//     printf("enter the first number ");
//     scanf("%d",&a);
//     printf("enter the second number ");
//     scanf("%d",&b);
//     int power=pow(a,b);
//     printf("%d",power);
// }

// float areaofcircle(float radiua);
// float areaofreactangle(float a,float b);
// float areaofsquare(float c);
// int main(){
// float a,b,c,radius;
// printf("enter side a ");
// scanf("%f",&a);
// printf("enter side b ");
// scanf("%f",&b);
// printf("enter side c ");
// scanf("%f",&c);
// printf("enter radius ");
// scanf("%f",& radius);
// float circle=areaofcircle(radius);
// float reactangle=areaofreactangle(a,b);
// float square=areaofsquare(c);
// printf("%f\n",circle);
// printf("%f\n",reactangle);
// printf("%f\n",square);
// }
// float areaofcircle(float radius){
// return 3.14*radius*radius;
// }
// float areaofreactangle(float a,float b){
// return a*b;
// }
// float areaofsquare(float c){
//     return c*c;
// }

// void printhello(int count);
// int main(){
// printhello(5);
// }
// void printhello(int count){
//     if(count==0){
//         return;
//     }
//     printf("hello!\n");
//     printhello(count-1);
// }

// int sum(int n);
// int main(){
// int n;
// printf("enter number n ");
// scanf("%d",&n);
// printf("sum of n number is %d",sum(n));
// return 0;
// }
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int sumNm1=sum(n-1);
//     int sumN= sumNm1 +n;
//     return sumN; 
// }

// int fact(int n);
// int main(){
// int n;
// printf(" Enter number n ");
// scanf("%d",&n);
// printf("Factorial of n number is %d",fact(n));
// return 0;
// }
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     int factNm1=fact(n-1);
//     int factN=factNm1*n;
//     return factN;
// }

// float ctof( float c);
// int main(){
// float c;
// printf(" Enter temprature in celsius ");
// scanf("%f",&c);
// printf("Temperature in Fahrenheit is %f",ctof(c));
// return 0;
// }
// float ctof(float c){
//     return (c*1.8)+32;
// }

// int pctg(int sci, int maths, int snas);
// int main(){
// int sci=92,maths=100,snas=80;
// printf(" Perctentage is %d",pctg(sci,maths,snas));
// return 0;
// }
// int pctg( int sci, int maths, int snas){
//     return ((sci+maths+snas)/3);
// } 

// int fib( int n );
// int main(){
// int n;
// printf("Enter n ");
// scanf("%d",&n);
// printf("fibonaci of %d number is %d",n,fib(n));
// fib(6);
// return 0;
// }
// int fib( int n ){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int fibNm1=fib(n-1);
//     int fibNm2=fib(n-2);
//     int fibN=fibNm1+fibNm2;
//     printf("fibonaci of %d number is %d\n",n,fibN);
//     return fibN;
// }

// int fib(int n);
// int main (){
//     int n;
//     printf("enter n");
//     scanf("%d",&n);
//     printf("fib of%d is :%d",n,fib(n));
//     return 0;

// }
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int fibNm1=fib(n-1);
//     int fibNm2=fib(n-2);
//     int fibN=fibNm1+fibNm2;
//     return fibN;
// }
