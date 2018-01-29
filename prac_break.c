#include "stdio.h"
int main(int argc, char const *argv[]) {
  int i, j;
  for (i = 1; i <= 3; i++) {
    for (j = 1; j <= 3; j++) {
      printf("%d %d\n", i,j );
      if (i==2 && j==2) {
        break;
      }
    }
  }
  return 0;
}

Output :
1 1
1 2
1 3
2 1
2 2
3 1
3 2
3 3
