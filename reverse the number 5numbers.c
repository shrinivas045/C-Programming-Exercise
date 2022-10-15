\#include<stdio.h>
int main()
{
    int num_1,num_2,num_3,num_4,num_5,value;
    printf("enter a value:-");
    scanf("%d",&value);

   num_1=value%10;
   num_2=(value/10)%10;
   num_3=(value/10)/10%10;
   num_4=(((value/10)/10)/10)%10;
   num_5=((((value/10)/10)/10)/10);
   printf("reverse number is %d%d%d%d%d",num_1,num_2,num_3,num_4,num_5);
}