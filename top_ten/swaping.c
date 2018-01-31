#include "stdio.h"
void main() {
  int a, b;

  printf("Enter A value : " );
  scanf("%d",&a);
  printf("Enter B value : " );
  scanf("%d",&b);

  a = a+b;
  b = a-b;
  a = a-b;

  printf("a = %d\n",a );
  printf("b = %d\n",b );
}
*********************************************
Output :
Enter A value : 50
Enter B value : 40
a = 40
b = 50
