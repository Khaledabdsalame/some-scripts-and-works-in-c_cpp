#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
   const int pizza=30;
   const int salad=60;
   const int tacos=65;
   float total;
   int choise;
   int size;
   int ingredients;
   int discounts;
   char codepromo[10];
   while(1){
   printf("Welcome to our restaurant\n");
   printf("To order food,Please choose:\n");
   printf("1 For Pizza\n");
   printf("2 For Tacos\n");
   printf("3 For Salad\n");
   printf("4 For Checkout\n");
   while(1){
   scanf("%d",&choise);
   switch(choise){
    case 1:
         while(1){
         printf("You ordered Pizza\n");
         printf("Choose The Size:\n");
         printf("For M Selcet 1\n");
         printf("For L Selcet 2\n");
         printf("For XL Selcet 3\n");
         total=pizza;
         while(1){
         scanf("%d",&size);
         switch(size){
            case 1:
                 printf("You Selcet The M Size\n");
                 total=total+ 15;
                 break;
            case 2:
                 printf("You Selcet The L Size\n");
                 total=total+ 20;
                 break;
            case 3:
                 printf("You Selcet The XL Size\n");
                 total=total+ 25;
                 break;
            default:
                 printf("Please Selcet a Size\n");
                 continue;
         }  break;   
        }
         printf("Please Selcet Your Ingredients:\n");
         printf("Selcet 1 For 3 Cheese\n");
         printf("Selcet 2 For Chicken\n");
         printf("Selcet 3 For Beef\n");
         printf("Selcet 4 For Tuna\n");
         while(1){
         scanf("%d",&ingredients);
         switch(ingredients){
            case 1:
                printf("Your ingredient is:3 Cheese\n");
                total=total+ 20;
                break;
            case 2:
                printf("Your ingredient is:Chicken\n");
                total=total+ 25;
                break;
            case 3:
                printf("Your ingredient is:Beef\n");
                total=total+ 30;
                break;
            case 4:
                printf("Your ingredient is: Tuna\n");
                total=total+ 35;
                break;
            default:
                printf("Please Choose From The menu\n");
                continue;
             }break;
         }
         printf("If You Student Selcet 1\n");
         printf("If You Senior Selcet 2\n");
         while(1){
         scanf("%d",&discounts);
         switch(discounts){
            case 1:
                printf("enter the code promo if you have");
                scanf("%s",codepromo);
                if(strcmp(codepromo,"freemeal")==0){
                    printf("you have a freemeal");
                    exit(0);
                }else{
                total=total-total*0.3;
                total=total+total*0.19;
                printf("Your Total Price is:%f £\n",total);
                exit(0);
                }
            case 2:
                printf("enter the code promo if you have");
                scanf("%s",codepromo);
                if(strcmp(codepromo,"freemeal")==0){
                    printf("you have a freemeal");
                    exit(0);
                }else{
                printf("Your Total Price is:%f £\n",total);
                total=total-total*0.3;
                total=total+total*0.19;
                exit(0);
                }
            default:
                printf("Selcet ethier choise\n");
                continue;
           }
         }
    case 2:
         while(1){
         printf("You ordered Tacos\n");
         printf("Choose The Size:\n");
         printf("For M Selcet 1\n");
         printf("For L Selcet 2\n");
         printf("For XL Selcet 3\n");
         total=tacos;
         while(1){
         scanf("%d",&size);
         switch(size){
            case 1:
                 printf("You Selcet The M Size\n");
                 total=total+ 15;
                 break;
            case 2:
                 printf("You Selcet The L Size\n");
                 total=total+ 20;
                 break;
            case 3:
                 printf("You Selcet The XL Size\n");
                 total=total+ 25;
                 break;
            default:
                 printf("Please Selcet a Size\n");
                 continue;
         }  break;   
        }
         printf("Please Selcet Your Ingredients:\n");
         printf("Selcet 1 For 3 Cheese\n");
         printf("Selcet 2 For Chicken\n");
         printf("Selcet 3 For Beef\n");
         printf("Selcet 4 For Tuna\n");
         while(1){
         scanf("%d",&ingredients);
         switch(ingredients){
            case 1:
                printf("Your ingredient is:3 Cheese\n");
                total=total+ 20;
                break;
            case 2:
                printf("Your ingredient is:Chicken\n");
                total=total+ 25;
                break;
            case 3:
                printf("Your ingredient is:Beef\n");
                total=total+ 30;
                break;
            case 4:
                printf("Your ingredient is: Tuna\n");
                total=total + 35;
                break;
            default:
                printf("Please Choose From The menu\n");
                continue;
             }break;
         }
         printf("If You Student Selcet 1\n");
         printf("If You Senior Selcet 2\n");
         while(1){
         scanf("%d",&discounts);
         switch(discounts){
            case 1:
                printf("enter the code promo if you have");
                scanf("%s",codepromo);
                if(strcmp(codepromo,"freemeal")==0){
                    printf("you have a freemeal");
                    exit(0);
                }else{
                total=total-total*0.3;
                total=total+total*0.19;
                printf("Your Total Price is:%f£ \n",total);
                exit(0);
                }
            case 2:
                printf("enter the code promo if you have");
                scanf("%s",codepromo);
                if(strcmp(codepromo,"freemeal")==0){
                    printf("you have a freemeal");
                    exit(0);
                }else{
                total=total-total*0.25;
                total=total+total*0.19;
                printf("Your Total Price is:%f£ \n",total);
                exit(0);
                }
            default:
                printf("Selcet ethier choise\n");
                continue;
           }
         }
    case 3:
         printf("You ordered Salad\n");
         printf("Choose The Size:\n");
         printf("For M Selcet 1\n");
         printf("For L Selcet 2\n");
         printf("For XL Selcet 3\n");
         total=tacos;
         scanf("%d",&size);
         switch(size){
            case 1:
                 printf("You Selcet The M Size\n");
                 total=total+ 30;
                 break;
            case 2:
                 printf("You Selcet The L Size\n");
                 total=total+ 35;
                 break;
            case 3:
                 printf("You Selcet The XL Size\n");
                 total=total+ 40;
                 break;
            default:
                 printf("Please Selcet a Size\n");
                 continue;
         }break;
         printf("Please Selcet Your Ingredients:\n");
         printf("Selcet 1 For 3 Cheese\n");
         printf("Selcet 2 For Chicken\n");
         printf("Selcet 3 For Beef\n");
         printf("Selcet 4 For Tuna\n");
         scanf("%d",&ingredients);
         switch(ingredients){
            case 1:
                printf("Your ingredient is:3 Cheese\n");
                total=total+ 15;
                break;
            case 2:
                printf("Your ingredient is:Chicken\n");
                total=total+ 20;
                break;
            case 3:
                printf("Your ingredient is:Beef\n");
                total=total+ 25;
                break;
            case 4:
                printf("Your ingredient is: Tuna\n");
                total=total+ 30;
                break;
            default:
                printf("Please Choose From The menu\n");
                break;
         }
         printf("If You Student Selcet 1\n");
         printf("If You Senior Selcet 2\n");
         scanf("%d",&discounts);
         switch(discounts){
             
             
         }
         } 
    case 4:
        exit(0);
    default:
         printf("Please Selcet From the menu");
         break;
         continue;
}
 }
}
}
}
