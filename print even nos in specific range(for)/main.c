#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=2;i<=10;i=i+2)
    {
        i=i;
        printf("%d\n",i);
    }
    printf("%d\n",i);
    printf("end");
}
