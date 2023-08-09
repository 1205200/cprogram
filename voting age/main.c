#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age>=18)
        printf("eligible to vote");
    else
        printf("not eligible to vote");
}


