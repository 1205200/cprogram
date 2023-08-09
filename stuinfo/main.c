#include <stdio.h>
#include <stdlib.h>

void main()
{

struct student
{
  int rno,m1,m2,m3,total;
  float avg;
  char name[10],grade;
} s[100];
  int n,i;
  printf("enter the number of students:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
 {
    printf("enter the rno\n");
    scanf("%d",&s[i].rno);
    printf("enter the student name\n");
    scanf("%s",s[i].name);
    printf("enter the marks\n");
    scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);
    s[i].total=s[i].m1+s[i].m2+s[i].m3;
    printf("total is:%d\n",s[i].total);
    s[i].avg=s[i].total/3;
    printf("average is:%f\n",s[i].avg);

    if(s[i].avg=100&&s[i].avg<=90)
    {
        printf("A grade\n");
    }
    else if(s[i].avg>=80&&s[i].avg<=70)
    {
        printf("B grade\n");
    }
    else if(s[i].avg>=60&&s[i].avg<=50)
    {
        printf("C grade\n");
    }
    else
    {
        printf("fail\n");
    }
}
}


