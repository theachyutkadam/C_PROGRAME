#include "stdio.h"
// int main()
// {
// 	int a=10, b=20, c=30, d=40, e=50, answer;
//   printf("%d \t %d \t %d \t %d \t %d \t",a, b, c, d, e );

//   answer = a+b+c+d+e;

//   printf("\n \t\t%d",answer );
// }


int main()
{
	int n, i, num[100], sum=0, average;

  while(n > 100 || n < 0){
  	printf("Error ! Put value value Range (0 to 100) \n");
  	printf("Enter the number again : \n");
  	scanf("%d", &n);
  }

  for (i = 0; i <=n; i++)
  {
    printf(" Enter the %d. value : \n",i+1);
    scanf("%d", &num[i]);
    
    sum += num[i];

  }
  average = sum /2;
  printf("%d", average);

	return 0;
}