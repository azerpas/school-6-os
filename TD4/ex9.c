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
    int value = atoi(argv[1]);
    pthread_t threads[value];
    printf("Creating %d threads\n", value);
    void * vals[value];
    for (size_t i = 0; i < value; i++)
    {
        pthread_create(&threads[i], NULL,runner, &i);
    }
    for (size_t i = 0; i < value; i++)
    {
        pthread_join(threads[i],&vals[i]);
    }
    
}
void *runner(void *param) {
    printf("Hello world!\n");
    printf("PID %i, count %d\n", getpid(), param);
    pthread_exit(0);
}