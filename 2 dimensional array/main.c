#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2],b[2][2],c[2][2],m,n;
    printf("enter a matrix:");
    for(m=0;m<2;m++)
    {
        for(n=0;n<2;n++)
        {
            scanf("%d",&a[m][n]);
        }
    }
    printf("enter b matrix:");
    for(m=0;m<2;m++)
    {
        for(n=0;n<2;n++)
        {
            scanf("%d",&b[m][n]);
        }
    }
    for(m=0;m<2;m++)
    {
        for(n=0;n<2;n++)
        {
            c[m][n]=a[m][n]+b[m][n];
        }
    }
    for(m=0;m<2;m++)
    {
        for(n=0;n<2;n++)
        {
            printf("%d\t",c[m][n]);
        }
    }
}
