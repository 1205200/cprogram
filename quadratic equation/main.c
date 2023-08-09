#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,dis,r1,r2;
    printf("enter the value of coefficient a b c");
    scanf("%f %f %f",&a,&b,&c);
    dis=b*b-(4*a*c);
    if(dis>0)
    {
        r1=(-b+(sqrt(dis)))/2*a;
        r2=(-b-(sqrt(dis)))/2*a;
        printf("root value of r1 and root value of r2 :%f %f\n",r1,r2);
        printf("roots are real");
    }
    else if(dis==0)
    {
      r1=r2=-b/2*a;
      printf("%f %f\n",r1,r2);
      printf("roots are equal");
    }
    else
    {
        printf("roots are not equal");
    }


}
