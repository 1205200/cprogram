
#include <stdlib.h>

int main()
{
   int employeeno,bs,da,ta,hra,gs,net;
   float it;
   char name [20];
   printf("employee name\n");
   scanf("%s",name);
   printf("employee no");
   scanf("%d\n",&employeeno);
   printf("dearness allowance da");
   scanf("%d\n",&da);
   printf("transport allowance ta");
   scanf("%d\n",&ta);
   printf("house rent allowance hra");
   scanf("%d\n",&hra);
   printf("basic salary bs %d");
   scanf("%d\n",&bs);
   it=0.15*bs;
   bs=bs-it;
   printf("basic salary after reduction of it:");
   gs=bs+da+ta+hra+it;
   printf("gross salary gs %d",gs);
   net=bs+da+ta+hra;
   printf("net salary:%d",net);
}
