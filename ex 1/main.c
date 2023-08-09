#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,number,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    printf("choose the method \n 1.for \n 2.while \n 3.do while\n");
    scanf("%d",&number);
    switch(number)
    {

    case 1:
        {
            for(i=0;i<n;i++)
                sum=sum+i;
            break;
        }
    case 2:
        while(i<=n)
        {
            sum=sum+i;
            i++;
            break;
        }
    case 3:
        do
        {
            sum=sum+i;
            i++;
        }
        while(i<=n);
            break;
        default:
        printf("choose from the above list\n");
    }
    printf("the sum of n natural numbers arem %d",sum);
}
