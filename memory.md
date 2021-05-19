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

