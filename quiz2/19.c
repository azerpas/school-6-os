#include<stdio.h>
#include<stdlib.h>
int main()

{

    int *p = (int *)malloc(sizeof(int));

 

    p = NULL;

 

    free(p);

}
