#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,size,key,find=0;
    printf("enter the size:");
    scanf("%d",&size);
    printf("enter the array values:");
    for(i=0;i<size;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("enter the key value:");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
       if(a[i]==key)
            find=1;
    }
    if(find==1)
        printf("value found");
    else
        printf("value not found");

}
