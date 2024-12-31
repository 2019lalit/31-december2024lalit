//Write a C program to find maximum between two numbers.
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter 1st number:\n");
    scanf("%d",&a);
    printf("enter 2nd number:\n");
    scanf("%d",&b);
    if(a>b){
        printf("a is maximum:\n");
    }else{
        printf("b is maximun:\n");
    }
    return 0;
}
