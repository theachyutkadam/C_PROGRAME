#include "stdio.h"
int main(int argc, char const *argv[]) {
  float num, i=1;
  printf("Enter value :");
  scanf("%d",&num );
  do {
  printf("%d * %d = %d \n",num, i, (num*i));
  i++ ;
} while(i<= 10);
  return 0;
}

Output :
Enter value :15
15 * 1 = 15
15 * 2 = 30
15 * 3 = 45
15 * 4 = 60
15 * 5 = 75
15 * 6 = 90
15 * 7 = 105
15 * 8 = 120
15 * 9 = 135
15 * 10 = 150
