#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2,b=4,c;
    c=b;
    b=a;
    a=c;
    printf("a=%d,\n",a);
    printf("b=%d,",b);

}
