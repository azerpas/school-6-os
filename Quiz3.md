# Quiz 3

### The concept of virtual memory is based on one or both of two basic techniques:
Segmentation and paging

### In a combined paging/segmentation system, a user’s address space is broken up into a number of:
Fixed-size pages, which are in turn broken down into variable-sized segments

### In segmentation, each address is specified by ____________
A segment number and offset

### In paging the user provides only ________ which is partitioned by the hardware into ________ and ______
one address; page number; offset

### Each entry in a segment table has a 
segment base

### The segment base contains the
starting physical address of the segment in memory

### The segment limit contains the segment length

### The offset of the logical address must be
between 0 and segment limit

### When the entries in the segment tables of two different processes point to the same physical location ____________
segment are shared

### Which memory allocation policy allocate the largest hole to the process
Worst-fit

### In a system employing a segmentation scheme for memory management, wasted space is due to: 
External fragmentation

### In a system employing a segmentation scheme for memory management, a process is divided into:
A number of segments that do not need to be of equal size

### A system that employs a segmentation memory management scheme makes use of a ____________________ that provides the starting address of the corresponding segment in main memory.
Segment table

### A system that employs a segmentation memory management scheme, the program and its associated data are divided into a number of __________________that need not be of the same length.
segments

### Segmentation has a number of advantages to the programmer over a nonsegmented address space, including:
- Simplifying the handling of growing data structures
- Sharing among processes
- Protection

### 