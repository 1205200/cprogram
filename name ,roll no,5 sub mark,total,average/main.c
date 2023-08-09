#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rollno,s1,s2,s3,s4,s5,total;
    float average;
    char name[10];
    printf("enter your name");
    scanf("%s",name);
    printf("enter roll no");
    scanf("%d",&rollno);
    printf("enter marks s1,s2,s3,s4,s5");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    printf(" total is %d",total);
    average=(s1+s2+s3+s4+s5)/5;
    printf(" average is %f \n",average);

}
