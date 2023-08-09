#include <stdio.h>
#include <stdlib.h>

int main()
{

    float c=10,f=20;
    f=(c*1.8)+32;
    printf("temperature in fahrenheit %f\n",f);
    c=(f-32)*1.8;
    printf("temperature in centigrade %f",c);

}
