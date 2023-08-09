#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("enter the value:");
    scanf("%c",&a);
    if(a>=65&&a<=90)
        printf("Alphabet");
    else if (a>=97&&a<=122)
        printf("alphabet");
        else
            printf("Not alphabet");
}
