#include <stdio.h>
#include <stdlib.h>

int main()
{
   struct e_bill
   {
       int hno;
       char name;
       float old_reading;
       float new_reading;
       float c_consume;
       float amount;
   }a[200];
   int n,i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i].hno);
       scanf("%s",a[i].name);
       scanf("%f %f",&a[i].old_reading,&a[i].new_reading);
       printf("%d",&a[i].hno);
       printf("%s",a[i].name);
       printf("%f %f",&a[i].old_reading,&a[i].new_reading);
   }
   a[i].c_consume=a[i].new_reading-a[i].old_reading;
   if(a[i].c_consume>=100)
   {
       printf("amount==1000");
   }
   else if(a[i].c_consume>=200&&a[i].c_consume<100)
   {
       printf("amount==2000");
   }
   else if(a[i].c_consume>=300&&a[i].c_consume<200)
   {
       printf("amount==3000");
   }
   else
    printf("greater than 5000");
}
