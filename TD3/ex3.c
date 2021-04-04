#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main(){
    int pid, i;
    for (i=0; i<3;i++){
        pid = fork();
        if (pid < 0)
        {
            /* code si échec: prinft("le fork() a échoué \n") */
        }
        else if (pid == 0)
        {
            printf("(i :%d)je suis le processus : %d, mon père est : %d\n",i,getpid(),getppid()) ;
        }
        else
        {
            printf("(i :%d)je suis le processus : %d, mon père est : %d\n",i,getpid(),getppid());
        }
    }
    return 0 ;
}