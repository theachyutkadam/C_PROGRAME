#include "stdio.h"
void main() {
  int num, temp, r, sum = 0;
  printf("Enter the value : " );
  scanf("%d",&num );

  temp = num;
  while (num > 0) {
    r = num%10;
    sum = (sum *10)+r;
    num = num/10;
  }
  if (temp == sum) {
  printf("Number is Palindrome\n");
} else
printf("Number is Not Palindrome\n" );
}
*************************************
Output : 
Enter the value : 151
Number is Palindrome
