#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100],n,i,j,temp,element;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the queue values:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The queue contains:\n");
    for(i=1;i<n;i++)
    printf("%d",a[i]);
    printf("enter the element:\n");
    scanf("%d",&element);
    for(i=1;i<n;i++)
