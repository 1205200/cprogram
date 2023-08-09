#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,n,element,position;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enetr the array elements:");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
        printf("the array elements are:\n");
        printf("enter the position of new element:");
        scanf("%d",&position);
        printf("enter the element:");
        scanf("%d",&element);
        for(i=1;i<=n;i++)

            if(i>position)
                a[i]=a[i-1];
        else
        {
         if(i==position);
            a[i]=position;
        }
        else
            a[i]=a[i];
            printf("array after inserting");
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);

}
