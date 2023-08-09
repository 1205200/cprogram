#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int b;
    printf("enter the alphabet:");
    scanf("%c",&a);
    printf("ASCII value is:%d\n",a);
    a=b;
    b=b%10;
    printf("unit digit is:%d",b);
}
