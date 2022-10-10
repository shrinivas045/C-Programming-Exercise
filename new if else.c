#include <stdio.h>

int main() {
    // Write C code here
   float salary,HRA,DA;
    
    printf("enter your salary:-");
    scanf("%f",&salary);
 
 if(salary<1500) {
    // HRA=(90/salary)*100
     printf("your HRA is %f,your DA is %f",HRA=(10*salary)/100,DA=(90*salary)/100);
 }    else if(salary>=1500) {
     printf("your HRA is %f,your DA is %f",HRA=500,DA=(98*salary)/100);
 } else {
     printf("wrong info");
 }
    

    return 0;
}