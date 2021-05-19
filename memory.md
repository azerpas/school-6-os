# Memory management

## No Memory Abstraction

Every process have access to the same **address space**.    
The issue is two process executing at the same time can overwrite each other.

### Solution
Use basic limiters to enable static relocation and give each process a separate address space.

## With Memory Abstraction

The **address space** is different for each process