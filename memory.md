# Memory management

## No Memory Abstraction

Every process have access to the same **address space**.    
The issue is two process executing at the same time can overwrite each other.

### Solution
Use basic limiters to enable static relocation and give each process a separate address space.

## With Memory Abstraction

The **address space** is different for each process

## Memory overload

Canno't contain all the process into the memory at the same time.

### 2 solutions:
- Swapping
- Virtual Memory

## Swapping 
A process can be swapped out from main memory to backing store. And then swapped in when there's more space.

# Managing Free Memory
OS must manage memory assigned dynamically by keeping track of memory usage, two ways: 
- Bitmaps
- Linked lists

## Bitmaps
![bitmap](https://user-images.githubusercontent.com/19282069/118846713-4a57b300-b8cd-11eb-9f11-76327a04822c.png)
Memory dived into allocation units as large as several kb
### Allocation unit
- **zero (0)**: unit free
- **one (1)**: unit occupied

## Linked Lists
![linkedlist](https://user-images.githubusercontent.com/19282069/118846866-7115e980-b8cd-11eb-9a8f-0dad535e7a6e.png)
Allocated and free memory segments, each segment contains:
- A process     
**or**      
- Empty hole between two process

## Memory Management Algorithms
- `First fit`: scan list for first hole big enough
- `Next fit`: same as first but keeps track of suitable hole
- `Best fit`: scan entire list and takes smallest possible hole
- `Worst fit`: takes the largest hole

# Virtual Memory

![pagedmemory](https://user-images.githubusercontent.com/19282069/118848516-1bdad780-b8cf-11eb-880e-e9dcb8c634f2.png)

Each process has its own address space, a **page**.     
This page map the addresses of the process in a logical memory to the physical memory.      
The OS can then choose whether it maps the addresses to the main memory or to a secondary memory.

## Structure of a page table entry
![pagestructure](https://user-images.githubusercontent.com/19282069/118849088-b0453a00-b8cf-11eb-8423-6f879208869d.png) 

- `Present bit`: (1) entry valid. (0) the virtual page is not in memory = page fault  
- `Protection bit`:  (1) read/write. (0) read
- `Modified & referenced bits`: 
- `Referenced bit`: 
- `Caching disabled`: 