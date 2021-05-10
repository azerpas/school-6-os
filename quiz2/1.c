#include<stdio.h>
#include<stdlib.h>
 int main()

   {

       int *ptr;

       ptr = (int *)calloc(1,sizeof(int));

       *ptr = 10;

       printf("%d\n",*ptr);

       return 0;

   }
