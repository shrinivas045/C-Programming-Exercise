#include<stdio.h>

int main() {

int number,number_number;
printf("enter a number upto 5 digit:-");
scanf("%d",&number);
printf("enter a number upto 5 digit:-");
scanf("%d",&number_number);

if(number <= 99999) {
    printf("sum of two number is %d",number+number_number);
} else {
    printf("not calculated");
}

   return 0;
}