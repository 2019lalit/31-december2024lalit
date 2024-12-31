//Write a C program to find maximum between three numbers.
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter a:\n");
    scanf("%d",&a);
     printf("enter b:\n");
    scanf("%d",&b);
     printf("enter c:\n");
    scanf("%d",&c);
   if(a>b){
       if(a>c){
           printf("a is maximun\n");
       }else{
           printf("c is maximun\n");
       }
       
   }else{
       if(b>c){
           printf("b is maximun\n");
       }else{
           printf("c is maximun\n");
       }
   }
      
    return 0;
}
