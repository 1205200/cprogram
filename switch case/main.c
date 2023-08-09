#include <stdio.h>
#include <stdlib.h>

int main()
{
    char y;
    printf("enter the character");
    scanf("%c",&y);
    switch(y)
    {
    case 'a':
        printf("a is a vowel");
        break;
    case 'b':
        printf("b is a vowel");
        break;
    default:
        printf("vowel is not a,b");
    }
}
