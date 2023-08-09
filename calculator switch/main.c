#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    int a,b,c;
    printf("enter the operation:");
    scanf("%c",&op);
    switch(op)
    {
        case '+':
        {
            printf("enter the two numbers:");
            scanf("%d %d",&a,&b);
            c=a+b;
            printf("%d",c);
            break;
        }



        case '-':
        {
            printf("enter the two numbers:");
            scanf("%d %d",&a,&b);
            c=a-b;
            printf("%d",c);
        }


        case '%':
       {
           printf("enter the two numbers:");
           scanf("%d %d",&a,&b);
           c=a%b;
           printf("%d",c);
           break;
       }



        case '/':
            {
                printf("enter the two numbers:");
                scanf("%d %d",&a,&b);
                c=a/b;
                printf("%d",c);
                break;
            }
        case '*':
            {
                printf("enter the two numbers:");
                scanf("%d %d",&a,&b);
                c=a*b;
                break;
            }

    }

}
