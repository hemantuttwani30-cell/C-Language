#include<stdio.h>
int main(){
    int n,lastDigit;
    printf("Enter Nummber: ");
    scanf("%d",&n);
    int reverseNumber=0;
  // if(n>0){
    while(n!=0){
        lastDigit=n%10;
        reverseNumber=(reverseNumber*10)+lastDigit;
        n=n/10;
    }
    printf("Reverse Number is:%d ",reverseNumber);
//}
// else{
//      while(n!=0){
//         lastDigit=n%10;
//         reverseNumber=(reverseNumber*10)+lastDigit;
//         n=n/10;
//     }
//     printf("Reverse Number is:%d ",reverseNumber);

// }
    return 0;
}