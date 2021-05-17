# Threads

## Difference with `fork()`

### `fork()`
- Copy of current process
- Two different contexts
- Tasks do not share memory (only with IPC)

### `thread`
- One process can have multiple threads
- Memory and resources are shared
- Synchronization through Mutexes, Semaphores...

![process-threads](https://user-images.githubusercontent.com/19282069/118503889-4f7cfc80-b72b-11eb-9d43-b0184ce43615.png)

## Sharing/Private

### Shared
- Address space
- Global variables
- Open files
- Child processes
- Signals

### Private
- Program counter
- Registers
- Stack 
- State

#### Thread control blocks (TBCs)
Store the following: 
- Thread ID
- Thread priority
- CPU state
- Pointer to PCB of parent process



