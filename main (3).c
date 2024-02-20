#include<stdio.h>
#include<stdbool.h>
int main(){
    int second;
    int min;
    int hour;
  while(true){
    printf("enter the hour");
    scanf("%d",&hour);
    printf("enter the min");
    scanf("%d",&min);
    printf("enter the second");
    scanf("%d",&second);
    if(hour>23||min>60||second>60){
        printf("your time is incorrect\n");
        continue;
    }
    else if(second==59 && min!=59){
        min=min+ 1;
        second=0;
         printf("your time is %d:%d:%d",hour,min,second);
         break;
    }
    else if(second==59 && hour<23 && min==59){
        hour=hour+ 1;
        min=0;
        second=0;
        printf("your time is %d:%d:%d",hour,min,second);
        break;
    }
    else if(second==59 && hour==23 && min==59){
        hour=0;
        min=0;
        second=0;
        printf("your time is 0%d:0%d:0%d",hour,min,second);
        break;
    }
    else{
          second=second+ 1;
          printf("your time is %d:%d:%d",hour,min,second);
          break;
    }
  }
 }