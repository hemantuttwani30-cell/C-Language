#include<stdio.h>
int main(){
    int n;
printf("Enter n: ");
scanf("%d",&n);
int a=0,b=1,c;
if(n==1){
printf("%d",a);
}
else if(n==2){
    printf("%d\t%d\t",a,b);
}
else{
    printf("%d\t%d\t",a,b);
for(int i=0;i<n-2;i++){
c=a+b;
a=b;
b=c;
printf("%d\t",c);

}
}
return 0;
}