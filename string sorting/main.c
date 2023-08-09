#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[5][10];
    int i,j,n,temp;
    printf("enter the number of name\n");
    scanf("%d",&n);
    printf("enter the array name");
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            if(stremp(a[i]>a[j])>0)
            {
              strepy(temp,a[i]);
              strcpy(a[i],a[j]);
              strcpy(a[i],temp);

            }
        }
    }
    printf("the stored names are\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
