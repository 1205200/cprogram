#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact=1,i,a;
    printf("enter the value");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
       {
        fact=fact*i;
       }
       printf("factorial of %d is:%d",a,fact);
}
