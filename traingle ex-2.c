// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c,angle;
    printf("enter a angle of a:-");
    scanf("%d",&a);
    printf("enter a angle of b:-");
    scanf("%d",&b);
    printf("enter a angle of c:-");
    scanf("%d",&c);
    
    if(a+b+c == 180) {
        printf("it is traingle");
    } else {
        printf("it is not tringle");
    }

    return 0;
}