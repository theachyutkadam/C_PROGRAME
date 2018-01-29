#include "stdio.h"
int main()
{
	int num1= 0, num2= 1, num3, i, count= 10;
	printf("%d\t %d\t", num1, num2);

	for (i = 0; i < count; i++)
	{
		num3 = num1 + num2;
		printf("%d\t",num3);
    
    num1 = num2;
    num2 = num3;
	}
}