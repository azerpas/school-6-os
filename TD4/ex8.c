#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
int value = 0;
void *runner(void *param); /* the thread */
int main(int argc, char * argv[])
{
    pthread_t tid;
    pthread_attr_t attr;
    pid_t pid;
    void *status;
    pid = fork();
    if (pid == 0) {
        pthread_attr_init(&attr);
        pthread_create(&tid,&attr,runner,NULL);
        pthread_join(tid,&status);
        pthread_exit(status);
    }
    else if (pid > 0) { 
        int v = -1;
        wait(&v);
        printf("Value is: %d", v); /* LINE P */
    }
}
void *runner(void *param) {
    char input[10];
    printf("Please enter a value: ");
    fgets(input, 10, stdin);
    value = atoi(input) + 1;
    return value;
}
