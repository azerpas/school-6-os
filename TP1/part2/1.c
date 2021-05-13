// C program to illustrate
// pipe system call in C
// shared by Parent and Child
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define MSGSIZE 80
char* msg1 = "hello";

char* concat(char* a, char* b){
    size_t l1 = 0;
    size_t l2 = 0;
    while(a[l1] != '\0'){
        ++l1;
    }
    while(b[l2] != '\0'){
        ++l2;
    }
    char c[l1+l2+1];
    for (size_t i = 0; i < l1; i++){
        c[i] = a[i];
    }
    for (size_t i = 0; i < l2; i++){
        c[i+l2] = b[i];
    }
    printf("After second loop: %s\n",c);
    c[l1+l2] = '\0';
    return c;
    
}

int main()
{
    char inbuf[MSGSIZE];
    int p[2], t[2], nbytes;
    pid_t pid;
    pipe(p);
    pipe(t);
    pid = fork();
    /* continued */
    if (pid == 0) {
        // SON
        close(p[1]);
        while ((nbytes = read(p[0], inbuf, MSGSIZE)) > 0)
            printf("%s \n", inbuf);
        if (nbytes != 0)
            exit(2);
        printf("Concat \n");
        char* concatened = concat(inbuf, "world");
        printf("Finished concat '%s' \n", concatened);
        return 0;
    }
    else {
        // FATHER
        close(t[1]);
        write(p[1], msg1, MSGSIZE);
        close(p[1]);
        wait(NULL);
    }
}