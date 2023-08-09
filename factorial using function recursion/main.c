#include <stdio.h>
#include <stdlib.h>

void main()
{
   int fact(int);
   int n=4,x;
   x=fact(n);
   printf("%d",x);
}
int fact(int m)
{
    if(m>1)
        return m*(fact(m-1));
    else
        return 1;
}
