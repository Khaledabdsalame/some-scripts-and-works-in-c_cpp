#include<stdio.h>
#include<windows.h>
#include <stdlib.h>
#include<stdbool.h>
int main() {
    int second;
    int min;
    int hour;

         Rigle:
              while (true) {
                 printf("enter your hour: ");
                 scanf_s("%d", &hour);
                 if (hour > 23) {
                      system("cls");
                      continue;
                    }
                     else {
                          break;
                         }
                      }
                while (true) {
                      printf("enter your min: ");
                      scanf_s("%d", &min);
                      if (min > 60) {
                           system("cls");
                                continue;
                               }
                       else {
                           break;
                          }
                        }
                  while (true) {
                        printf("enter your second: ");
                        scanf_s("%d", &second);
                        if (second > 60) {
                              system("cls");
                                   continue;
                                  }
                             else {
                                 break;
                                     }
                                  }
    while (second <= 60 || hour < 24 || min < 60) {
        second++;
        if (second == 60) {
            second = 0;
            min++;
        }
        if (min == 60) {
            hour++;
            min = 0;
        }
        if (hour == 24) {
            hour = 0;
        }
            printf("%d:%d:%d \n", hour, min, second);
            printf("Enter e To change the Time \n");
            printf("Enter c To Exit \n");
            Sleep(1000);
            if (GetAsyncKeyState('C')) {
                system("cls");
                exit(0);
            }
            if (GetAsyncKeyState('E'))
            {    
                system("cls");
                goto Rigle;
                
                
            }
            system("cls");
            }     
    }