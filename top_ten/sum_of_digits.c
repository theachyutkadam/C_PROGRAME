#include "stdio.h"
void main() {
  int num, r, sum = 0;
  printf("Enter the value : " );
  scanf("%d",&num );

  while (num > 0) {
    r = num%10;
    sum = sum +r;
    num = num/10;
  }
printf("The sum of digits is : %d\n",sum);
}
**********************************
Output :
Enter the value : 1524
The sum of digits is : 12
