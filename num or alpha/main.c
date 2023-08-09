#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a;
    printf("enter character");
    scanf("%s",&a);
    if (a>='A'&&a<='Z'||a>='a'&&a<='z')
        printf("a is alphabet");
        else
        printf("a is a number");

}
