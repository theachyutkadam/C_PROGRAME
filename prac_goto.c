#include "stdio.h"
int main(int argc, char const *argv[]) {
  int age;

    ineligable:
    printf("You are not eligable to vote. \n");


  printf("Enter your age : " );
  scanf("%d", &age);
    if (age <= 18)
      goto ineligable;
    else
      printf("You are eligable to vote\n" );
  return 0;
}
