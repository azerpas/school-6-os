/**
 * @author @azerpas
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>

void hello(void *id){
    printf("------THREAD n°%d", (int)id);
    printf("Hello World!\n");
    printf("And my pid is: %d\n", getpid());
}

int main(){
    pthread_t ts[5];
    for (size_t i = 0; i < 5; i++){
        int res = pthread_create(&ts[i], NULL, hello, (void*)i);
        if(res != 0){
            fprintf (stderr, "%s", strerror (res));
            perror("Canno't create thread");
            exit(EXIT_FAILURE);
        }
    }
    for (size_t i = 0; i < 5; i++){
        pthread_join(&ts[i], NULL);
    }
}