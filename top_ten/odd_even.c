#include "stdio.h"

int oddeven(int num) {
  int i, count = 0;
  for (i = 1; i <= num; i++) {
    if (i%2 == 0) {
      printf(" %d is even \n", i );
      count ++;
    }
    else {
      printf(" %d is Odd \n", i );
    }
  }
  return count;
}
void main() {
  int number, count;
  printf("Enter the value : " );
  scanf("%d",&number);

  count = oddeven(number);
printf("total Even number is : %d\n",count);
}

*************************************
Output :
Enter the value : 20
 1 is Odd
 2 is even
 3 is Odd
 4 is even
 5 is Odd
 6 is even
 7 is Odd
 8 is even
 9 is Odd
 10 is even
 11 is Odd
 12 is even
 13 is Odd
 14 is even
 15 is Odd
 16 is even
 17 is Odd
 18 is even
 19 is Odd
 20 is even
total Even number is : 10
