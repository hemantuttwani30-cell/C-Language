#include<stdio.h>
int main(){
    // int marks;
    // printf("enter marks ");
    // scanf("%d", & marks);
    // if ( marks>30){
    //     printf("PASS");
    // }
    // else if (marks<=30){
    //     printf("FAIL");
    // }
    // return 0;

    // int marks;
    // printf("enter marks");
    // scanf("%d",& marks);
    // // marks>30? printf("PASS"): printf("FAIL");
    // if (marks<30){
    //     printf("C");
    // }
    // else if (30<=marks && marks<70){
    //     printf("B");
    // }
    // else if( 70<=marks && marks<90){
    //     printf("A");
    // }
    // else if( 90<= marks && marks<=100){
    //     printf("A+");
    // }
    // else {
    //     printf("marks is not valid");
    // }

    // char x;
    // printf("enter charather ");
    // scanf("%s",& x);
    // if (x>='a' && x<='z'){
    //     printf("loweer case ");
    // }
    // else if ( x>='A' && x<='Z'){
    //     printf("Upper case ");
    // }
    // else {
    //     printf(" not a valid charather ");
    // }

    int day;
    printf("enter day ");
    scanf("%d",& day);
    switch(day){
        case 1 : printf("Monday");
        break; 
        case 2 : printf("Tuesday");
        break;
        case 3 : printf("Wednesay");
        break;
        case 4 : printf("Thursday");
        break;
        case 5 : printf("Friday");
        break;
        case 6 : printf("Saturday");
        break;
        case 7 : printf("Sunday");
        break;
        default : printf("not a valid day");
        break;
    }
    return 0;
   
}