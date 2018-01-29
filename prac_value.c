#include "stdio.h"

  void change(int *num) {
    printf("before call value : %d\n",*num);
    (*num) += 100;
    printf("after call value : %d\n",*num);
  }

int main() {
  int x = 100;
  printf("before call value : %d\n", x);
  change(&x);
  printf("after calling function : %d\n",x );
  return 0;
}
 Output :

before call value : 100
before call value : 100
after call value : 200
after calling function : 200
