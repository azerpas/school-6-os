# Interprocess Communication (IPC)

Cooperating processes need IPC to share info.	Two models of IPC: 
- Shared memory
- Message passing

## Process Interaction 
1. Data sharing
2. Message passing
3. Synchronization
4. Signals

## 3 ways
1. Sockets
2. Remote Procedure Calls
3. Pipes

### Socket
Use network to share information. Need the IP and Port.

### Pipe
One-way communication.

## Race conditions
To prevent race conditions, we use **mutual exclusion** to ensure two operations are not executing concurrently.	
#### Data access synchronization
Coordination of processes to implement mutual exclusion over shared data

## Critical Sections (CS)
**Mutual exclusion** is implemented by using *critical sections* of code.

![critical-sections](https://user-images.githubusercontent.com/19282069/118507398-7be64800-b72e-11eb-8cc6-89ce6da0a3dd.png)

### Progress
The granted entry of a process to a CS

### Bounded wait
Integer with estimated place in line

## Semaphore

![semaphore](https://user-images.githubusercontent.com/19282069/118508992-f794c480-b72f-11eb-95ce-7329aaf76f39.png)

![semaphore-example](https://user-images.githubusercontent.com/19282069/118509106-11360c00-b730-11eb-92c6-e7bb591f2619.png)
 
