5.10.2 Review questions

Q5-1. What are the three subsystems that make up a computer?
Q5-2. What are the components of a CPU?
Q5-3. What is the function of the ALU?
Q5-4. What is the function of the control unit?
Q5-5. What is the function of main memory?
Q5-6. Define RAM, ROM, SRAM, DRAM, PROM, EPROM, and EEPROM.
Q5-7. What is the purpose of cache memory?
Q5-8. Describe the physical components of a magnetic disk.
Q5-9. How are the surfaces of a magnetic disk and magnetic tape organized?
Q5-10. Compare and contrast CD-R, CD-RW, and DVD.
Q5-11. Compare and contrast SCSI, FireWire and USB controllers.
Q5-12. Compare and contrast the two methods for handling the addressing of I/O devices.
Q5-13. Compare and contrast the three methods for handling the synchronization of the CPU with I/O devices.
Q5-14. Compare and contrast CISC architecture with RISC architecture.
Q5-15. Describe pipelining and its purpose.
Q5-16. Describe parallel processing and its purpose.

5.10.3 Problems

P5-1. A computer has 64 MB (megabytes) of memory. Each word is 4 bytes. How many bits are needed to address each single word in memory?
P5-2. How many bytes of memory are needed to store a full screen of data if the screen is made of 24 lines with 80 characters in each line? The system uses ASCII code, with each ASCII character stored as a byte.
P5-3. An imaginary computer has 16 data registers (R0 to R15), 1024 words in memory, and 16 different instructions (add, subtract, and so on). What is the minimum size of an add instruction in bits if a typical instruction uses the following format: add M R2.
P5-4. If the computer in P5-3 uses the same size of word for data and instructions, what is the size of each data register?
P5-5. What is the size of the instruction register in the computer in P5-3?

P5-6. What is the size of the program counter in the computer in P5-3?
P5-7. What is the size of the data bus in the computer in P5-3?
P5-8. What is the size of the address bus in the computer in P5-3?
P5-9. What is the minimum size of the control bus in the computer in P5-3?
P5-10. A computer uses isolated I/O addressing. Its memory has 1024 words. If each controller has 16 registers, how many controllers can be accessed by this computer?
P5-11. A computer uses memory-mapped I/O addressing. The address bus uses ten lines (10 bits). If memory is made up of 1000 words, how many four-register controllers can be accessed by the computer?
P5-12. Using the instruction set of the simple computer in Section 5.8, write the code for a program that performs the following calculation: D ← A + B + C, in which A, B, C, and D are integers in two’s complement format. The user types the value of A, B, and C, and the value of D is displayed on the monitor.
P5-13. Using the instruction set of the simple computer, write the code for a program that performs the following calculation:
  B ← A + 3
A and 3 are integers in two’s complement format. The user types the value of A and the value of B is displayed on the monitor. (Hint: use the increment instruction.)
P5-14. Using the instruction set of the simple computer in Section 5.8, write the code for a program that performs the following calculation:
  B ← A – 2
A and are integers in two’s complement format. The user types the value of A and the value of B is displayed on the monitor. (Hint: use the decrement instruction.)
P5-15. Using the instruction set of the simple computer in Section 5.8, write the code for a program that adds n integers typed on the keyboard and displays their sum. You need first to type the value of n. (Hint: use decrement and jump instructions and repeat the addition n times.)
P5-16. Using the instruction set of the simple computer in Section 5.8, write the code for a program that accepts two integers from the keyboard. If the first integer is 0, the program increments the second integer, and if the first integer is 1, the program decrements the second integer. The first integer must be only 0 or 1 otherwise the program fails. The program displays the result of the increment or decrement.
