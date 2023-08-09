#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,first=1,second=2,third;
    for(i=0;i<6;i++)
    {
        third=first+second;
        printf("%d\n",third);
        first=second;
        second=third;

    }
}
