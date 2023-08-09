#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,rem,sum=0,i;
    printf("enter a number");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        rem=a%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==a)
        printf("perfect number");
        else
       printf("not a perfect number");
}
