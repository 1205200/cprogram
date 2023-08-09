#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,count=0;
    printf("enter a number");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    printf("the number of digits in an integer is:%d",count);
}
