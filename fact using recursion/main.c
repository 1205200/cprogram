#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact(int);
    int n,x;
    printf("enter a number");
    scanf("%d",&n);
    x=fact(n);
    printf("%d",x);
}
int fact(int m)
{
    if(m>1)
        return m*fact(m-1);
    else
        return 1;
}
