// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int main() {
 int L1,L2,G1,G2,D;
   printf("enter a latitude of L1");
   scanf("%d",&L1);
    printf("enter a latitude of L2");
   scanf("%d",&L2);
    printf("enter a longitude G1");
   scanf("%d",&G1);
    printf("enter a longitude G2");
   scanf("%d",&G2);
  
   D=3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
   printf("distance in nautical miles is %d",D);

    return 0;
}