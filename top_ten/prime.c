#include "stdio.h"

int prime(int n) {
  int j, temp = 0, i, flag = 0, count = 0;
  for (j = 3; j <= n; j++) {
  temp = j/2;
  for (i = 2; i <= temp; i++) {
    if (j%i == 0) {
      flag = 1;
      break;
    }
  }
}
  if (flag == 0) {
    printf("%d is prime", j);
    count ++;
  }

return 0;
}

void main() {
  int num, ans = 0;
  printf("Enter value : " );
  scanf("%d",&num );
  printf("0 and 1 are Not considerd as a prime number.\n" );
  ans = prime(num);
printf(" %d Prime number is : ",num);

}
