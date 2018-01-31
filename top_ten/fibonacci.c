#include "stdio.h"
int fibonacci(int n) {
static int n1=0, n2=1, n3;
  if(n > 0) {
    n3 = n1 + n2;
    n1=n2;
    n2=n3;
    printf(" %d", n3);
    fibonacci(n-1);
  }
}
void main() {
  int num, fab;
  printf("Enter value : " );
  scanf("%d",&num );
  printf("%d %d ",0,1 );
  fab = fibonacci(num);
  // printf("%d", fab);
}
**********************************************
output :
Enter value : 10
0 1  1 2 3 5 8 13 21 34 55 89%
