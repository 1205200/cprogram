#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x,y,t,hcf,lcm;
    printf("enter two integers\n");
    scanf("%d %d",&x,&y);
    a=x;
    b=y;
    while(b>0)
    {
      t=b;
      b=a%b;
      a=t;
    }
    printf("hcf is:%d\n",a);
    lcm=(x*y)/a;
    printf("lcm is:%d",lcm);
}


