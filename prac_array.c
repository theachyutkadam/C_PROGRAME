#include "stdio.h"
int main() {
  int i;
  int marks[5];
  marks[0]= 55;
  marks[1]= 59;
  marks[2]= 45;
  marks[3]= 85;
  marks[4]= 15;
  for (i = 0; i < 5; i++) {
    if (i == 0) {
      continue;
    }
    if (i == 4) {
      printf("%d\n",i );
    }
    printf("%d Subject Marks is : %d\n", i, marks[i] );
  }
  return 0;
}
