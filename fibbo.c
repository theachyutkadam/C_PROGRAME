#include<stdio.h>
void main() 
{    
  int n1=0, n2=1, n3, i, count=10;    
  printf("%d",&n1,"%d",&n2);    
    
  for(i=2;i<count;i++)
  {    
    n3=n1+n2;    
    printf("fibbo is : ",&n3);    
    n1=n2;    
    n2=n3;    
  }    
} 