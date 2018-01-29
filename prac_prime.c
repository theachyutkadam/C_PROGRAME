#include<stdio.h>
void main() {
  int number, prime, i, count = 0, flag = 1;
  printf("Enter Value : \n" );
  scanf("%d",&prime );
  printf("1 to %d Prime Number is : \n", prime);
  for (number = 1; number <= prime; number++) {
    flag = 1;
    for (i = 2; i < (number/2); i++) {
      if (number % i == 0) {
        flag = 0;
        break;
      }
    }
   if (flag == 1  ) {
     printf("\t %d is Prime \n",number);
     count = count +1;
   }
  }
  printf("Number 1 to %d Prime Number is : %d",prime, count);
}
