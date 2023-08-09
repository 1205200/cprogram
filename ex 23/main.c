#include <stdio.h>
void main(int argc,char*argv[])


{
   printf("programme name is:%s\n",argv[0]);
   if(argv<2)
   {
       printf("no argument passed through command line.\n");

   }
   else
   {
       printf("first argument is:%s\n",argv[1]);
   }
}
