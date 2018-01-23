#include "stdio.h"
int main(int argc, char const *argv[]) {
  int number = 0;
  printf("Enter the value : ");
  scanf("%d",&number );

  switch (number) {
    case 10:
    printf("achyut value 10 : \n" );

    case 40:
    printf("achyut value 50 : \n" );

    case 70:
    printf("achyut value 70 : \n" );

    case 100:
    printf("achyut value 100 : \n" );

    default:
    printf("none of this : \n" );
  }
  return 0;
}

Output :
Enter the value : 10
achyut value 10 :
achyut value 50 :
achyut value 70 :
achyut value 100 :
none of this :
