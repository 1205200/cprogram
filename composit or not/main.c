#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,c,count;
    printf("enter the number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=a%i;
        if(c==0)
            count=count+1;
    }
    if(count>2)
    {
        printf("composite number");
    }
    else if(a==0||a==1)
    {
        printf("the number is neither prime or composite");
    }
    else
    {
        printf("the given number is not composite");
    }


}
