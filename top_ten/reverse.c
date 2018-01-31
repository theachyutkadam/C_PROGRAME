#include "stdio.h"
void main() {
  int num, sum = 0, r;
  printf("Enter the value : ");
  scanf("%d",&num );

  while (num > 0) {
    r = num%10;
    sum = (sum*10) + r;
    num=num/10;
  }
  printf("%d", sum);
}
******************************
Output
Enter the value : 1542
2451%   
