# Process

Instance of a program with six components:
- id
- code
- data
- stack
- resources
- state


## Program counter, stack pointer and address space

![pc-sp-as](https://slideplayer.com/slide/12265929/72/images/5/18%2F02%2F08+Process+Address+Space.+This+is+the+process+s+own+view+of+the+address+space.+physical+memory+may+not+be+laid+out+this+way+at+all..jpg)

### Heap & Stack
Dynamic allocated memory that can be increased or decreased with malloc or other functions in C.     
Stack pointer points to them.


### Static Data
Static data

### Code
Program counter is showing which part of the code we're executing.

## Child Processes
Kernel initiates an execution of a program by creating a process for it: **creates process tree**

### Concurrency and Parallelism
- Parallelism: occur at the same time
- Concurrency: one task at the time

## Kernel & Processes
Kernel primary task is to control operation of processes to provide an effective usage of the system

![Linux Kernel overview](https://www.programmersought.com/images/672/bc1cdf5610feb002b5e10b45f9609720.png)

## States

#### Running
CPU is currently executing instructions in the process code

#### Blocked
The process has to wait until a resource request is granted or a specific event occurs

#### Ready
The process wish to use CPU, but has not been dispatched

#### Terminated
The operation has completed normally or the OS aborted it

![states](https://user-images.githubusercontent.com/19282069/118403306-277b9380-b66e-11eb-8817-100f78b7d56d.png)

## Deadlock 

![deadlock](https://user-images.githubusercontent.com/19282069/118403337-4417cb80-b66e-11eb-8841-617e8c2e2872.png)

## Scheduling
**Goal**: Maximize CPU usage by switching from process to another with time sharing     
#### Process scheduler
Selects the process for next execution on CPU
#### Queues
- Job queue: all process in queue
- Ready queue: all process waiting to execute
Device queues: all process waiting for I/O device

## Tracking
**PID** identify each process and the OS use **queues** to organise processes.

## Swapping
A process can be *swapped* from main memory to backing store (ex: HDD) and then brought back into memory.

![swapping](https://user-images.githubusercontent.com/19282069/118403513-fbacdd80-b66e-11eb-962b-3891b6e8962e.png)

## Process Control Block (PCB)

![pcb](https://user-images.githubusercontent.com/19282069/118403528-1c753300-b66f-11eb-9d05-13c20b6e21cc.png)

### Context save function
Save CPU PCB state and change state from *running* to *ready*

### Scheduling function 
Use PCBs to select process *ready* and pass its id to dispatch

### Dispatching function
Sets up context of process, state to *running* and loads saved CPU state from PCB into CPU

### Example
![functions](https://user-images.githubusercontent.com/19282069/118403611-84c41480-b66f-11eb-91af-3da117e45410.png)

