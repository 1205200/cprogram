#include <stdio.h>
#include <stdlib.h>

void main()
{
   struct employee
   {
       int eno;
       char name[10];
       float basic,TA,HRA,IT;
       float gross,net;
   };
   struct employee e, *p ;
   p=&e;
   printf("enter the eno");
   scanf("%d",&p->eno);
   printf("\n enter the name");
   scanf("%s",p->name);
   printf("\n enter the values of basic,TA,HRA, IT");
   scanf("%f %f %f %f",&p->basic,&p->TA,&p->HRA,&p->IT);
   p->gross=p->basic+p->TA+p->HRA;
   p->net=p->gross-p->IT;
   printf("%f",p->gross);
   printf("%f",p->net);
}
