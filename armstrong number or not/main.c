#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,a,sum=0,rem;
    printf("enter the number");
    scanf("%d",&num);
    a=num;
    while(a!=0)
    {
        rem=a%10;
        sum=sum+(rem*rem*rem);
        a=a/10;
    }
    if(sum==a)
        printf("Armstrong number");
    else
        printf("not Armstrong number");

}
