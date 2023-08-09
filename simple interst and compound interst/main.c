#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int p,r,t,n,si,ci;
    printf("enter principal rate time p r t");
    scanf("%d %d %d",&p,&r,&t);
    si=(p*r*t)/100;
    printf("%d \n",si);
    printf(" principal rate compounding frequency time p r n t");
    scanf("%d %d %d %d",&p,&r,&n,&t);
    ci=p*pow((1+r/n),(n*t))-p;
    printf("%d\n",ci);
}
