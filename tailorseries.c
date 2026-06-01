// #include<stdio.h>
// #include<math.h>
// #define  PI 3.14
// int main(){
//     int n;
//     double a,b,c,x,power,d;
//     float sum,product;
//     printf("Enter value of x&n");
//     scanf("%lf%d",&x,&n);
//     sum=1;
//     d=(x*PI)/180;
//     for(int i=1;i<=n;i++){
//         product=1;
//         a=pow(-1,i);
//         b=pow(d,2*i);
//         power=pow(2,i);
//         for(int j=1;j<=power;j++){
//             product=product*j;
//         }
//         c=product;
//         sum=sum+(a*b)/c;
//     }
//     printf("Value is: %f",sum);
//     return 0;
// }
#include<stdio.h>
#include<math.h>
#define  PI 3.14159265359

int main() {

    int x, n;
    float sum = 1,a;
    a=(x*PI)/180;
    printf("Enter value of x and n: ");
    scanf("%d%d", &x, &n);
     a=(x*PI)/180;    

    for(int i = 1; i <= n; i++) {

        float fact = 1;

        // calculate (2*i)!
        for(int j = 1; j <= 2*i; j++) {
            fact = fact * j;
        }

        // term of series
        float term = pow(-1, i) * pow(a, 2*i) / fact;

        sum = sum + term;
    }

    printf("Value is: %f", sum);

    return 0;
}



// #include<stdio.h>
// #include<math.h>
// #define PI 3.14

// int main(){

//     int x,n,a;
//     float sum=1;

//     printf("Enter value of x and n : ");
//     scanf("%d%d",&x,&n);
//     a=(x*PI)/180;

//     for(int i=1;i<=n;i++){

//         float fact=1;
//         float power=pow(2,i);

//         for(int j=1;j<=power;j++){
//             fact*=j;
//         }

//         sum=sum+(pow(-1,i)*pow(a,2*i))/fact;

//     }
//     printf("Value is: %f",sum);
//     return 0;
// }
