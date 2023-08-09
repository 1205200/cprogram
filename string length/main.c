#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10];
    int c=0;
    printf("enter the string:");
    scanf("%s",a);
    for(c=0;a[c]!='\0';c++);
    printf("length of string is %d",c);

}
