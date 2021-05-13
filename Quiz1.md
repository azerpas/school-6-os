# Quiz 1

### After a newly created process has been made ready for execution, which of the following actions occurs:
It competes with other process for the CPU

### When does the thread gets blocked?
Thread moves to the ready queue

### Bounded waiting implies that there exists a bound on the number of times a process is allowed to enter its critical section
After a process has made a request to enter its critical section and before the request is granted

### Privileged instructions are executed in
Kernel mode

### Thread synchronisation is required because of?
- All threads of a process share the same address space
- All threads of a process share the same global variables
- All threads of a process can share the same files

### Concurrent access to shared data may result in
Data inconsistency

### A situation where several processes access and manipulate the same data concurrently and the outcome of the execution depends on the particular order in which access takes place is called
race condition

### The segment of code in which the process may change common variables, update tables, write into files is known as
critical section

### Mutual exclusion implies that
if a process is executing in its critical section, then no other process must be executing in their critical sections

### Semaphore is a/an _______ to solve the critical section problem.
integer variable

### The wait operation of the semaphore basically works on the basic _______ system call.
block()

### The code that changes the value of the semaphore is ____________
critical section code

### Swapping of two processes concept is usually used for swapping between:
Memory and Disk

### if process A is waiting for a nonpreemptible resource that is held by process B and process B is waiting for a nonpreemptable resource that is held by A, that is called:
deadlock

### If a process must loop repeatedly, keeping the CPU occupied, to wait for a condition, that is called
busy waiting

### Threads belonging to the same process share the:
data section

### Process can share/exchange data by using concepts:
Share memory and message passing