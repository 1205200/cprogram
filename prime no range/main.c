#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,c,n,count=0;
    printf("enter the number");
    scanf("%d",&a);
    for(n=1;n<=a;n++)
    {
        for(i=1;i<=a;i++)

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
