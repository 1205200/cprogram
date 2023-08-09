#include <stdio.h>
void swap(int*,int*);
int main()
{
    int a=10,b=20;
    printf("Before swap:%d %d\n",a,b);
    swap(&a,&b);
    printf("After swap:%d %d",a,b);
}
void swap(int*p,int*q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
