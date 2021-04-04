#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main(void)
{ 
    pid_t pid;
    int i;
    if ((pid = fork()) == -1)
    { 
        perror("fork"); exit(1);
    }
    if (pid == 0)
    { 
        /* child1 */
        for (i = 1; i <= 50; i++)
        printf("%d\n", i);
        return 0;
    }
    if ((pid = fork()) == -1)
    { 
        perror("fork"); exit(1);
    }
    if (pid == 0)
    { 
        /* child2 */
        for (i = 51; i <= 100; i++)
        printf("%d\n", i);
        return 0;
    }
}

// 2 childs are created and 