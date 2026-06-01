#include<stdio.h>
int sum (int n);
int main(){
//    int x,y,z,temp;
//    printf("enter x,y,z");
//    scanf("%d%d%d",&x,&y,&z);
//    temp=x;
//    x=y;
//    y=z;
//    z=temp;
//    printf("Value of x,y,z, now : %d%d%d",x,y,z);
// int value;
// printf("enter value");
// scanf("%d",&value);
// printf("last digit of the number u entered is : %d",value%10);
// float value,new;
// printf("enter a float value");
// scanf("%f",&value);
// new=(int)value;
// printf("value of the integer part of the float is : %.1f\n",new);
// printf("decimal part of the float is : %f",value-new);
// int n,d;
// printf("Enter n: ");
// scanf("%d",&n);
// d=n%10;
// printf("%d",d);
// printf("sum of n nautural number is: %d",sum(n));

int n,sum=0,lastDigit;
printf("Enter number: ");
scanf("%d",&n);
while(n!=0){
   lastDigit=n%10;
   sum+=lastDigit;
   n=n/10;
}
printf("Sum of number is: %d",sum);
   return 0;
}
//    int sum(int n){
//       if(n==0){
//          return 0;
//       }
   
//   int sumN=sum(n-1)+n;
//   return sumN;
// }