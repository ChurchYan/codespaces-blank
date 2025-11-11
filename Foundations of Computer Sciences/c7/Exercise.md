Q7-1. What is the difference between an application program and an operating system?
 Q7-2. What are the components of an operating system?
 Q7-3. What is the difference between monoprogramming and multiprogramming?
 Q7-4. How is paging different from partitioning?
 Q7-5. How is demand paging more efficient than regular paging?
 Q7-6.  How is a program related to a job? How is a job related to a process? How is a 
program related to a process?
 Q7-7. Where does a program reside? Where does a job reside? Where does a process 
reside?
 Q7-8. What is the difference between a job scheduler and a process scheduler
  Q7-9. Why does an operating system need queues?
 Q7-10. How does deadlock differ from starvation?

  P7-1.  A computer has a monoprogramming operating system. If the size of memory is 
64 MB and the memory-resident part of the operating system needs 4 MB, what 
is the maximum size of a program that can be run by this computer?
 P7-2.  Redo Exercise 7-1 if the operating system automatically allocates 10 MB of mem
ory to data.
 P7-3.  A monoprogramming operating system runs programs that on average need 
10 microseconds access to the CPU and 70 microseconds access to the I/O 
devices. What percentage of time is the CPU idle?
 P7-4.  A multiprogramming operating system uses an apportioning scheme and divides 
the 60 MB of available memory into four partitions of 10 MB, 12 MB, 18 MB, 
and 20 MB. The first program to be run needs 17 MB and occupies the third 
partition. The second program needs 8 MB and occupies the first partition. The 
third program needs 10.5 MB and occupies the second partition. Finally, the 
fourth program needs 20 MB and occupies the fourth partition. What is the total 
memory used? What is the total memory wasted? What percentage of memory 
is wasted?
 P7-5.  Redo Problem P7-4 if all programs need 10 MB of memory. 
P7-6.  A multiprogramming operating system uses paging. The available memory is 
60 MB divided into 15 frames, each of 4 MB. The first program needs 13 MB. The 
second program needs 12 MB. The third program needs 27 MB. 
a. How many frames are used by the first program?
 b. How many frames are used by the second program?
 c. How many frames are used by the third program?
 d. How many frames are unused?
 e. What is the total memory wasted?
 f. What percentage of memory is wasted? 
P7-7.  An operating system uses virtual memory but requires the whole program to 
be in physical memory during execution (no paging or segmentation). The size 
of physical memory is 100 MB. The size of virtual memory is 1 GB. How many 
programs of size 10 MB can be run concurrently by this operating system? How 
many of them can be in memory at any time? How many of them must be on 
disk?
 P7-8. What is the status of a process in each of the following situations?
 a. The process is using the CPU.
 b. The process has finished printing and needs the attention of the CPU again.
 c. The process has been stopped because its time slot is over.
 d. The process is reading data from the keyboard.
 e. The process is printing data.
  P7-9.  Three processes (A, B, and C) are running concurrently. Process A has acquired 
File1, but needs File2. Process B has acquired File3, but needs File1. Process C 
has acquired File2, but needs File3. Draw a diagram for these processes. Is this a 
deadlock situation?
 P7-10.  Three processes (A, B, and C) are running concurrently. Process A has acqui
red File1. Process B has acquired File2, but needs File1. Process C has acquired 
File3, but needs File2. Draw a diagram for these processes. Is this a deadlock 
situation? If your answer is ‘no’, show how the processes can eventually finish 
their tasks