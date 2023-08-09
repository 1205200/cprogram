#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n,i,count=0,c;
    printf("enter the range of prime number:");
    scanf("%d",&a);
    for(n=1;n<=a;n++)
    {
        for(i=1;i<=n;i++)
        {
            c=n%i;
            if(c==0)
            {
                count=count+1;
            }
        }
        if(count==2)
        {
            printf("%d\n",n);
        }
          count=0;
    }
}
