#include "stdio.h"

void main() {
  int number, r, temp, sum=0;
  printf("Ente the number : \n" );
  scanf("%d",&number );
  temp = number;

  while (number>0) {
    r = number%10;
    sum = sum+(r*r*r);
    number = number/10;
  }

if (temp == sum) {
  printf("Number is Armstrong " );
}
else {
  printf("Number is not Armstrong\n");
}
}
**************************************
Output :
Ente the number :
153
Number is Armstrong
                                                                                                                                                      ➜  top_ten git:(master) ✗ ./arm
Ente the number :
258
Number is not Armstrong
