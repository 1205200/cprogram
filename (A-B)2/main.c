#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter numbers");
    scanf("%d %d",&a,&b);
    c=(a*a)+(b*b)-(2*a*b);
    printf("%d",c);
}
