#include "stdio.h"
int main(int argc, char const *argv[]) {
  int num= 1, amt;
  printf("Enter amt :");
  scanf("%d",&amt );
  while (num<= 10) {
    printf("%d * %d = %d \n", amt, num, (amt*num) );
    num++;
  }
  return 0;
}

Output :
Enter amt :20
20 * 1 = 20
20 * 2 = 40
20 * 3 = 60
20 * 4 = 80
20 * 5 = 100
20 * 6 = 120
20 * 7 = 140
20 * 8 = 160
20 * 9 = 180
20 * 10 = 200
