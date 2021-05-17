# Kernel

Kernel-Based OS allowed portability and convenience in design and coding.

## Monolithic Structure
Deprecated in favor of Kernel environnements.	
Sole OS layer had interface with bare machine:
- Architecture-dependent code
- Poor portability
- Hard to test and debug
- High costs of maintenance

## Structure

![structure](https://user-images.githubusercontent.com/19282069/118498367-3de52600-b726-11eb-9edf-7921013fbfff.png)

## Typical functions
- **Process management**: save context of interrupted program, dispatch process
- **Process communication**: send and receive interprocess messages
- **Memory management**: swapping, handle page fault
- **I/O management**: init/process/recover I/O
- **File management**: read/write files
- **Security management**: auth to user
- **Network management**: send/receive data

## Microkernel-based OS
They execute as servers and do not include scheduler and memory handling.    
The goal is to achieve high reliability by splitting OS in small modules.
![microkernel](https://user-images.githubusercontent.com/19282069/118499101-ea270c80-b726-11eb-9427-e3496d426a47.png)

![microkernel2](https://user-images.githubusercontent.com/19282069/118499730-7fc29c00-b727-11eb-81c7-b9fe37c8e1be.png)

## Multiprogramming systems
Maximize use of CPU
1. If current process happens to need I/O task...
2. OS interrupt the process and give priority to another one that is ready.

## Time-Sharing
Time-sharing environment gives a fixed time interval (*Time Slice*) to each process, thus executing for this interval.

![time-sharing](https://user-images.githubusercontent.com/19282069/118501082-aa612480-b728-11eb-94e1-13aadad2f05c.png)

## Operation modes
CPU operate in two mode with *interrupt*:
1. Kernel mode
2. User mode (subset of machine instructions available)		

A program need to perform a **System call** (Interrupt) to use File functions


