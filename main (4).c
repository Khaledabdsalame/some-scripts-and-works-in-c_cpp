#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    float a;
    float b;
    float c;
    int choise;
    int pruduit;
    float sum;
    int mod;
  while(true){
    printf("Please Choose a methode:\n");
    printf("1 for check the sum is negative or positive or nul\n");
    printf("2 for check the product is even or oded\n");
    scanf("%d",&choise);
    switch(choise){
        case 1:
           printf("enter the first number");
           scanf("%f",&a);
           printf("enter the second number");
           scanf("%f",&b);
           printf("enter the third number");
           scanf("%f",&c);
           sum=a+b+c;
           if(sum>0){
               printf("the sum is positive");
           }
           if(sum<0) {
                printf("the sum is negative");
           }
            if(sum==0){
                printf("the sum is nul");
            }
            exit(0);
         case 2:
            printf("enter the first number");
            scanf("%f",&a);
            printf("enter the second number");
            scanf("%f",&b);
            printf("enter the third number");
            scanf("%f",&c);
            pruduit=a*b*c;
            mod=pruduit % 2;
            if(mod==0){
                 printf("the product is even");
             }
             else{
                 printf("the product is oded");
               }
              exit(0);
           default:
                continue;
                break;
    }
}
}