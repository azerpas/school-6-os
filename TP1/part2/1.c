// C program to illustrate
// pipe system call in C
// shared by Parent and Child
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define MSGSIZE 80
char* msg1 = "hello";

void concat(char* a, char* b){
    int len = sizeof(a)-1;
    int i = 0;
    printf("%c",a[2]);
    while(b[i] != '\0'){
        printf("b: %c\n", b[i]);
        printf("a[%d]: ",len);
        printf("%c\n", a[len]);
        a[len] = b[i];
        printf("%s \n", a);
        i++;
        len++;
    }
}

int main()
{
    char inbuf[MSGSIZE];
    int p[2], nbytes;
    pid_t pid;
    pipe(p);
    /* continued */
    if (pid = fork() == 0) {
        // SON
        close(p[1]);
        while ((nbytes = read(p[0], inbuf, MSGSIZE)) > 0)
            printf("%s \n", inbuf);
        if (nbytes != 0)
            exit(2);
        printf("Concat \n");
        concat(inbuf, " world");
        printf("Finished concat '%s' \n", inbuf);
        return 0;
    }
    else {
        // FATHER
        write(p[1], msg1, MSGSIZE);
        close(p[1]);
        wait(NULL);
    }
}