#include <stdio.h>

int main() {
    // Write C code here
             int year;
    
    printf("enter a year:-");
    scanf("%d",&year);
 
 if(year%4) {
   printf("it is leap year");
 }
 else if(year %! 4) {
     printf("it is not leap year");
 }
    
    return 0;
}