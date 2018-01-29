#include "stdio.h"
int cube(int n, int b){
  int b = 2;
return n*b*b;
}
int main() {
int num1, num2, num3;
  num1 = cube(5);
  num2 = cube(10);
  num3 = cube(4);

  printf("%d\n",num1 );
  printf("%d\n",num2 );
  printf("%d\n",num3 );

return 0;
}
