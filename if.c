#include "stdio.h"
int main() {
  int number = 0;
  printf("Enter the Value : ");
  scanf("%d",&number );
  if (number%2 == 0) {
    printf("%d Number is Even.", number);
  }
  return 0;
}
