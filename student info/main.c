#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rno,m1,m2,m3,total;
    float avg;
    char name[10];
    printf("enter the rno:");
    scanf("%d",&rno);
    printf("enter name:");
    scanf("%s",&name);
    printf("enter the mark m1 m2 m3:");
    scanf("%d %d %d",&m1,&m2,&m3);
    total= m1+m2+m3;
    printf("total is:%d",total);
    avg=(m1+m2+m3)/3;
    printf("avg is:%f",avg);


}
