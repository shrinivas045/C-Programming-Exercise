// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int lenth,breadth,area,perimeter;
   printf("enter a value of lenth:-");
   scanf("%d",&lenth);
   printf("enter a value of breadth:-");
   scanf("%d",&breadth);
   
   area=lenth*breadth;
   printf("area of rectangle is %d\n",area);
   perimeter=2*(lenth+breadth);
   printf("perimeter of rectangle is %d\n",perimeter);
   if(area > perimeter) 
   {
       printf("area is greater then perimeter");
   } else {
       printf("perimeter is grater than area");
   }
   
   
    return 0;
}