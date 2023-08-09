#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    char name;
    printf("enter the mark");
    scanf("%d",&grade);
    if(grade>90)
    {
       printf("A grade");
    }
    else if(grade>=80)
    {
       printf("B grade");
    }
    else if(grade>=70)
     {
       printf("C grade");
     }
      else if(grade>=60)
    {
       printf("D grade");
    }
     else
     {
        printf("fail");
     }

}




































