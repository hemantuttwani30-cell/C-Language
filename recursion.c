#include<stdio.h>
int reverse(int n);
int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("%d",n);
reverse(n);
    return 0;
}
int reverse(int n){
int a=n-1;
printf("%d",a);
if(a!=1){
    reverse(a);
}
}