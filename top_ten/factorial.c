#include "stdio.h"
void main() {
  int number, i = 1, sum = 1;
  printf("Enter the Number : " );
  scanf("%d",&number );
  while (i <= number) {
    sum = sum*i;
    i++;
  }
  printf("1 to %d Factorial is : %d ", number,sum );
}
*****************************************
Output :
Enter the Number : 6
1 to 6 Factorial is : 720 %
