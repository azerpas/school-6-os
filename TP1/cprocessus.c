/*
Example primitive fork () use on Linux */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void) {
    int pid; /* PID du processus fils */
    int i;
    pid = fork();
    switch (pid) {
        case 1:
            printf("Erreur: echec du fork() n");
            exit(1);
            break;
        case 0:
            /* PROCESSUS FILS */
            printf("je suis le processus fils : PID=%d , mon pere est : PPID=%d\n", getpid(), getppid());
            exit(0); /* fin du processus fils */ 
            break;
        default:
            /* PROCESSUS PERE */
            printf("Ici le pere: le fils a un pid=%d\n", pid ); 
            wait(0); /* attente de la fin du fils */ 
            printf("Fin du pere.\n");
    }
}