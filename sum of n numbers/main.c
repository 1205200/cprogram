#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,num,sum=0;
    printf("enter the value");
    scanf("%d",&n);
    printf("choose the option \n 1 for\n 2 while \n 3 do while");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        {
            for(i=0;i<=n;i++)
                sum=sum+i;
            break;
        }
    case 2:
        {
            while(i<=n)
                sum=sum+i;
            i++;
            break;
        }
    case 3:
        {
            do
            {
                sum=sum+i;
                i++;
            }
            while(i<=n);
                break;
        }
        printf("choose your method\n");
        {
            printf("the sum of n numbers are %d",sum);
        }
    }
}
