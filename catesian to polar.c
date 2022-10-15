// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int main() {
    // Write C code here
    float r,thetha,x,y;
    printf("enter coordinates of (x,y)\n");
    scanf("%f%f",&x,&y);
    
    r=sqrt(x*x+y*y);
    thetha=atan(y/x);
    
    printf("polar coordinates is (r:,thetha:) %f,%f ",r,thetha);

    return 0;
}