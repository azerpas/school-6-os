#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int value = 0;
void *runner(void *param); /* the thread */
int main(int argc, char * argv[])
{
    pthread_t tid;
    pthread_attr_t attr;
    pid_t pid;
    pid = fork();
    if (pid == 0) {/* child process */
        pthread_attr_init(&attr);
        pthread_create(&tid,&attr,runner,NULL);
        pthread_join(tid,NULL);
        printf("CHILD: value = %d", value); /* LINE C */
    }
    else if (pid > 0) { /* parent provess */
        wait(NULL);
        printf("PARENT: value = %d", value); /* LINE P */
    }
}
void *runner(void *param) {
    value = 5;
    pthread_exit(0);
}
