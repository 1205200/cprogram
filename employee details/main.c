#include <stdio.h>
#include <stdlib.h>

int main()
{
   int employeeno,bs,da,ta,hra,gs,net;
   float it;
   char name [20];
   printf("employee name");
   scanf("%s",name);
   printf("employee no");
   scanf("%d",&employeeno);
   printf("dearness allowance da");
   scanf("%d",&da);
   printf("transport allowance ta");
   scanf("%d",&ta);
   printf("house rent allowance hra");
   scanf("%d",&hra);
   it=0.15*bs;
   bs=bs-it;
   printf("basic salary:%d\n",bs);
   printf("basic salary after reduction of it:");
   gs=bs+da+ta+hra+it;
   printf("gross salary gs %d\n",gs);
   net=bs+da+ta+hra;
   printf("net salary:%d\n",net);
}
