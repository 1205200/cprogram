#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    if (a>0)
        printf("positive");
    else if (a<0)
        printf("negative");
    else
        printf("0");

}
