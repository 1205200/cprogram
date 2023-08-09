#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,rem,binno=0,base=1;
   printf("enter the decimal number");
   scanf("%d",&num);
   while(num>0)
   {
      rem=num%2;
      binno=binno+rem*base;
      num=num/2;
      base=base*10;
   }
   printf("binary value of the decimal number is:%d",binno);

}
