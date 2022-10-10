#include <stdio.h>

int main() {
    // Write C code here
    int value;
    printf("enter a value of itom:-");
    scanf("%d",&value);
    
    if(value>=1000) {
    
        printf("total discount is %d",(value*10)/100);
    } else {
        printf("%d",value);
    }

    return 0;
}