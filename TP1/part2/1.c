/**
 * @author @azerpas
 * Write Linux C program to create two processes: P1 (the parent process) and P2 (the child process
of P1). The parent process P1 takes a string and passes it to the child process P2. P2 concatenates the
received string with another string without using string function and sends it back to P1 for printing. You
must use pipe() in your solution
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define MSGSIZE 80
char* msg1 = "hello";

char* concat(char* a, char* b){
    size_t l1 = 0;
    size_t l2 = 0;
    // Get length of a
    while(a[l1] != '\0'){
        ++l1;
    }
    // Get length of b
    while(b[l2] != '\0'){
        ++l2;
    }
    // Create 'c' string
    char c[l1+l2+1];
    for (size_t i = 0; i < l1; i++){
        c[i] = a[i];
    }
    for (size_t i = 0; i < l2; i++){
        c[i+l2] = b[i];
    }
    c[l1+l2] = '\0';
    return c;
    
}

int main()
{
    char inbuf[MSGSIZE], final[MSGSIZE];
    int p[2], t[2], nbytes;
    pid_t pid;
    // Create pipes
    pipe(p);
    pipe(t);
    pid = fork();
    if (pid == 0) {
        // SON
        // Closing writing pipe of 'p'
        close(p[1]);
        // Reading from pipe 'p' (father message)
        while ((nbytes = read(p[0], inbuf, MSGSIZE)) > 0)
            printf("%s \n", inbuf);
        if (nbytes != 0)
            exit(2);
        printf("Concat \n");
        // Concatenate
        char* concatened = concat(inbuf, "world");
        printf("Finished concat '%s' \n", concatened);
        // Send message to father with pipe 't'
        write(t[1], concatened, MSGSIZE);
        close(t[1]);
        return 0;
    }
    else {
        // FATHER
        close(t[1]);
        // Sending message to son with pipe 'p'
        write(p[1], msg1, MSGSIZE);
        close(p[1]);
        // Reading back the message from pipe 't'
        while ((nbytes = read(t[0], final, MSGSIZE)) > 0)
            printf("Feedback from son: '%s' \n", final);
        wait(NULL);
    }
}