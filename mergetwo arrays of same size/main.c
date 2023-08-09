#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a[10],b[10],n1,n2,i,k,merge[20];
    printf("Enter the value for n1:");
    scanf("%d",&n1);
    printf("Enter the array1 elements:");
    for (i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        merge[i]=a[i];
    }
    k=i;
    printf("\nEnter the value for n2:");
    scanf("%d",&n2);
    printf("Enter array 2 elements:");
    for (i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
        merge[k]=b[i];
        k++;
    }
    printf("The merged array:");
    for (i=0;i<k;i++)
    {
        printf("%d\t",merge[i]);
    }

}
