#include<stdio.h>
#include<math.h>
int main()

{
    int wcf,v,t;
    printf("enter a value of velocity:");
    scanf("%d",&v);
    printf("enter a value of t:");
    scanf("%d",&t);
 
 

    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("air tempreture is %d",wcf);
}