#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the value");
    scanf("%d",&n);
   if(n<90)
    {
        printf("first quadrant");

    }
    else if(n>=90)
    {
        printf("second quadrant");
    }
    else if(n>=180)
           {
               printf("third quadrant");
           }

    else(n>=270);
    {
        printf("fourth quadrant");
    }



}
