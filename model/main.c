#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int i,range,count,c,j;
    printf("enter the range :");
    scanf("%d",&range);
    for(i=1;i<+range;i++)
    {
        for(j=1;j<=range;j++)
        {

            count=i%j;
            if(count==0)
            {

                c=c+1;
            }
        }
        if(c==2)
        {

            printf("%d\t",i);

        }
        c=0;
    }
    return 0;
}*/

void main()
{

    FILE *fp1;
    char ch;
    fp1=fopen("aa.txt","r");
    while((ch=getc(fp1))!=EOF)
        putchar(ch);
    fclose(fp1);

}
