#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[5][10],grade[5][2];
    int rno[5],m1[5],m2[5],m3[5],m4[5],m5[5],total[5],i;
    int avg[5];
    printf("enter the name,rno and 5 subject marks of five students:");
    for(i=0;i<5;i++)
    {
        scanf("%s",name[i]);
        scanf("%d",&rno[i]);
        scanf("%d %d %d %d %d",&m1[i],&m2[i],&m3[i],&m4[i],&m5[i]);
        total[i]=m1[i]+m2[i]+m3[i]+m4[i]+m5[i];
        avg[i]=total[i]/5;
        switch(avg[i]/10)
        {
          case 10:
              printf("A grade");
              break;
          case 9:
            printf("B grade");
            break;
            case 8:
                printf("C grade");
                break;
            case 7:
                printf("D grade");
                break;
            case  6:
                printf("E grade");
                break;
                default:
                printf("fail");

        }

    }






}
