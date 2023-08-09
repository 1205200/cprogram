#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    char d;
    printf("enter the operation:");
    scanf("%c",&d);

    if(d=='+')
    {
        printf("enter the two numbers:");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("sum is:%d",c);
    }
    else if(d=='-')
    {
        printf("enter the two numbers");
        scanf("%d %d",&a,&b);
        c=a-b;
        printf("difference is:%d",c);
    }
    else if(d=='*')
    {
        printf("enter the two numbers");
        scanf("%d",&a,&b);
        c=a*b;
        printf("%d",c);
    }
     else if(d=='/')
    {
        printf("enter the two numbers");
        scanf("%d %d",&a,&b);
        c=a/b;
        printf("%d",c);
    }
     else if(d=='%')
    {
        printf("enter the two numbers");
        scanf("%d %d",&a,&b);
        c=a%b;
        printf("%d",c);
    }
    else
        printf("error");
}
