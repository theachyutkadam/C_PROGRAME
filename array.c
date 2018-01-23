#include <stdio.h>
void main() {
	int value, i, first, last, mid, mid2;
	printf("\nEnter the value : ");
	scanf("%d", &value);
  
  // for (i = 0; i <=value; ++i)
  first= value%10;
  last = value/10;
  mid = last%10;
  mid2 = last/10;
  
  printf("%d",first);
  printf("%d",mid);
  printf("%d",mid2);

  printf("\n");
}