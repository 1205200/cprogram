#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a;
  printf("enter year");
  scanf("%d",&a);
  if(a%4==0)
    printf("leap year");
  else if(a%4!=0)
    printf("not a leap year");
  else
    printf("error");
}
