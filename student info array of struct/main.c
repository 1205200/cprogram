#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        int rno,m1,m2,m3,total;
        char name [10],grade;
        float avg;
    }s[100];
    int n,i;
    printf("enter the number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the roll no")
        scanf("%d",&s[i].rno);
        scanf("%s",s[i].name);
        scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        s[i].avg=s[i].total/3;
        printf("%d %d",s[i].total,s[i].avg);
        if(s[i].avg>=90)
            printf("a grade");
        else if(s[i].avg>=80&&s[i].avg<90)
            printf("b grade");
            else if(s[i].avg>=70&&s[i].avg<80)
                printf("c grade");
            else
                printf("d grade");
    }
}
