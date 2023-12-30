#include<stdio.h> 
int main(){ 
     
    const int x=25; 
    int y; 
    int attemp=0; 
    do{ 
        printf("please enter a number"); 
        scanf("%d",&y); 
        attemp++; 
        printf("your attemps is %d \n",attemp); 
        if(y>x){ 
        printf("your number is higher than that number\n"); 
        } 
         if(y<x){ 
         printf("your number is lower than that number\n"); 
        } 
        if(y==x){ 
        printf("you guse the number"); 
        } 
        continue; 
    } 
    while(x!=y); 
     
}
