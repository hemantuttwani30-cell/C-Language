#include<stdio.h>
int main(){
    // for(int i=0;i<=10;i++){
    // printf("%d\n",i);
    // }

    // for(char i='a';i<='z';i++){
    //     printf("%c\n",i);
    // }

    // int n;
    // printf("enter n ");
    // scanf("%d",&n);
    // int i=0;
    // while(i<=n){
    //     printf("%d\n",i);
    //     i++;
    // }

    // int n;
    // printf("enter n ");
    // scanf("%d",& n );
    // int sum=0;
    // for(int i=n;i>=0;i--){
    //     sum=sum+i;
    //     printf("%d\n",i);
    // }
    // printf("%d",sum);
    
    // int n;
    // printf("enter n ");
    // scanf("%d",&n);
    // for(int i=1;i<=10;i++){
    //     printf("%d\n",i*n);
    // }
    // int n;
    // do{
    //     printf("enter n ");
    //     scanf("%d",&n);
    //     if(n%7==0){
    //         break;
    //     }
    // }while(1);
    // printf("thank you");

    // for(int i=1;i<=10;i++){
    //     if(i==6){
    //         continue;
    //     }
    //     printf("%d\n",i);
    // }

    // for(int i=5;i<=50;i++){
    //     if(i%2==0){
    //         continue;
    //     }
    //     printf("%d\n",i);
    // }

    // int n;
    // printf("enter n ");
    // scanf("%d",&n);
    // int multiply=1;
    // for(int i=1;i<=n;i++){
    //    multiply*=i; 
    // }
    // printf("%d", multiply);

    // int n;
    // printf("enter n ");
    // scanf("%d",&n);
    // for(int i=10;i>=1;i--){
    //     printf("%d\n",i*n);
    // }

    int sum=0;
    for(int i=5;i<=50;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}