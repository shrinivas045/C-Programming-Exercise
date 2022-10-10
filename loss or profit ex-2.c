#include<stdio.h>

int main() {

int cost_price,selling_price,total_profit,total_loss;
printf("enter cost price of product:-");
scanf("%d",&cost_price);
printf("enter selling price of product:-");
scanf("%d",&selling_price);

 if(cost_price < selling_price) {
     printf("youare in profitable %d",total_profit=(selling_price-cost_price));
 }
 else {
     printf("your in loss %d",total_loss=(cost_price-selling_price));
 }

   return 0;
}