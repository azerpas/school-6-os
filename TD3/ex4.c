#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void main() {
    pid_t p1, p2, p3, p4;
    int i;
    if ((p1=fork())==0)
        if ((p2=fork())==0)
            printf("je suis le processus p2, mon numero est %d \n", getpid());
    else execlp("a", "a", NULL);
    if ((p3=fork()==0)) { execlp("b","b", NULL); }
    if ((p4=fork()==0)) { execlp("c","c", NULL); }
    sleep(5);
    /* attente de terminaison des fils*/
    while((i=waitpid(-1,NULL,0))>0) printf(" \nFils %d termine\n ",i) ;
}