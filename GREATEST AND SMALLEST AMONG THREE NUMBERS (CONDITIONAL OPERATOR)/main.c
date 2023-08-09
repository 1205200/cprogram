#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,A,B;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    A=a>b?a>c?a:c:b>c?b:c;
    printf("largest number is:%d\n",A);
    B=a<b?a<c?a:b:c<c?b:c;
    printf("smallest number is:%d",B);
}
