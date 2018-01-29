#include "stdio.h"

int factorial(int n) {
  if (n < 0) {
    return -1;
  }
  if (n == 0) {
    return 1;
    return(n * factorial (n-1));
  }
}
int main(int argc, char const *argv[]) {
  int fact = 0;
  fact = factorial(5);
  printf("Factorial of 5 is : %d \n", fact);
  return 0;
}
