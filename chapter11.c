#include<stdio.h>
#include<stdlib.h>
int main(){
    // printf("%d\n",sizeof(int));
    // printf("%d",sizeof(float));
    // printf("%d\n",sizeof(char));
    // float *ptr;
    // ptr=(float*)malloc(5*sizeof(float));
    // // ptr[0]=1;
    // // ptr[1]=2;
    // // ptr[2]=3;
    // // ptr[3]=4;
    // // ptr[4]=5;
    // for(int i=0;i<5;i++){
    //     printf("%f\n",ptr[i]);
    // }
    // int n;
    // printf("enter n ");
    // scanf("%d",&n);
    // int *ptr;
    // ptr=(int*)calloc(n,sizeof(int));
    // for(int i=0;i<n;i++){
    //     printf("%d\n",ptr[i]);
    // }
    // free(ptr);
    // ptr=(int*)calloc(2,sizeof(int));
    // for(int i=0;i<2;i++){
    //     printf("%d\n",ptr[i]);
    // }

    // int *ptr;
    // ptr=(int*)calloc(5,sizeof(int));
    // printf("enter 5 Numbers  ");
    // for(int i=0;i<5;i++){
    //    scanf("%d",&ptr[i]);
    // }
    // // ptr=realloc(ptr,8);
    // printf("enter 8 numbers");
    // for(int i=0;i<8;i++){
    //     scanf("%d",&ptr[i]);
    // }
    //print
    // for(int i=0;i<5;i++){
    //     printf("numbers are %d\n",ptr[i]);
    // }

    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }

    realloc(ptr,6);
    ptr[0]=0;
    ptr[1]=2;
    ptr[2]=4;
    ptr[3]=6;
    ptr[4]=8;
    ptr[5]=10;

    for(int i=0;i<6;i++){
        printf("%d\n",ptr[i]);
    }
    


    return 0;
}