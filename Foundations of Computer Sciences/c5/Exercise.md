1. What are the three subsystems that make up a computer?
    Answer: cpu, memory , i/o device
    Ai:

2. What are the components of a CPU?
    Answer: arithmetic logic unit, register , control unit
    Ai:


3. What is the function of the ALU?
    Answer: logic operation, shift operation and arithmetich operation
    Ai:


4. What is the function of the control unit?
    Answer: 控制cpu的所有操作, 如存取数据, 解码指令等
    Ai:


5. What is the function of main memory?
    Answer: 用来存储Program+Data
    Ai:


6. Define RAM, ROM, SRAM, DRAM, PROM, EPROM, and EEPROM.
    Answer: ram指通过内存地址访问,断电流式数据. rom只读,不可写入, 断电不丢失. sram速度快价格贵,常见于cpu缓存. dram是内存条, prom是一次性可编程, 写入后只能读取, 如老式bios. eprom写入后可编程, 如老式卡带. eeprom可擦除及重新编程, 如u盘及新BIOS
    Ai:


7. What is the purpose of cache memory?
    Answer: 减少cpu取数据的时间, 提高cpu的运行效率
    Ai:


8. Describe the physical components of a magnetic disk.
    Answer: 分为磁头, 磁盘, 机械臂以及控制电路
    Ai:


9. How are the surfaces of a magnetic disk and magnetic tape organized?
    Answer: 分为哪一个盘片, 磁头号(盘片的正反面), 磁道, 扇区
    Ai:


10. Compare and contrast CD-R, CD-RW, and DVD.
    Answer: cd-r写入一次后无法修改, cd-rw可多次重新写入, dvd的pits更小, 相比之下存储更多信息
    Ai:


11. Compare and contrast SCSI, FireWire and USB controllers.
    Answer: 
    Ai:


12. Compare and contrast the two methods for handling the addressing of I/O devices.
    Answer: isolated i/o 的读写命令是独立的一套方法, 和memory的地址不共享. memory-mapped i/o 使用的是memory相同的读写方法, 只要读取指定的内存地址就能访问i/o设备, 缺点是会占用一部分内存空间
    Ai:


13. Compare and contrast the three methods for handling the synchronization of the CPU with I/O devices.
    Answer: programmed i/o 是cpu不断接收i/o, 如dos命令行, 这样效率低下. interrupt i/o 当i/o时随时打断cpu, cpu还要负责搬运数据, 效率中等. Direct Memory Access有一个专门的DMA Controller, 接收i/o操作的指令, 等i/o操作完成后再传输给cpu
    Ai:


14. Compare and contrast CISC architecture with RISC architecture.
    Answer: cisc指令多, risc指令少, cisc方便程序员, risc编程复杂, csic一般功耗高
    Ai:


15. Describe pipelining and its purpose.
    Answer: 就是流水线工作, 一条指令分为多个步骤如Fetch, Decode等, 第一条指令的Decode和第二条指令的Fetch可以同时执行
    Ai:


16. Describe parallel processing and its purpose.
    Answer: mimd, 多个指令处理多个数据流, 加速任务的执行
    Ai:



1. A computer has 64 MB (megabytes) of memory. Each word is 4 bytes. How many bits are needed to address each single word in memory?
    Answer: 64mb = 64 * 1024 kbytes = 64*1024*1024 bytes (byte=8bits), 然后要通过bits表示word的可能性, 需要除以word的长度, 除以四以后,等于2^4 * 2^10 * 2^10, 这样一共是24, 需要24bits
    Ai:


2. How many bytes of memory are needed to store a full screen of data if the screen is made of 24 lines with 80 characters in each line? The system uses ASCII code, with each ASCII character stored as a byte.
    Answer: 24*80 = 1920 bytes
    Ai:


3. An imaginary computer has 16 data registers (R0 to R15), 1024 words in memory, and 16 different instructions (add, subtract, and so on). What is the minimum size of an add instruction in bits if a typical instruction uses the following format: add M R2.
    Answer: add可以用4bits来表示, 2^10=1024, 所以10bits可以表示1024个word, R2可以用4bits表示 所以最少需要10+4+4=18位
    Ai:


4. If the computer in question3 uses the same size of word for data and instructions, what is the size of each data register?
    Answer: 通常情况下，“一个字的长度 = 核心通用寄存器长度”。register就是18位
    Ai:

5. What is the size of the instruction register in the computer in P5-3?
    Answer: 4位, 因为Instruction只有16种
    Ai: 指令寄存器 (Instruction Register) 用于存放整条当前正在执行的指令，而不仅仅是操作码部分。因为指令长度是18位，所以指令寄存器的大小也必须是18位

6. What is the size of the program counter in the computer in P5-3?
    Answer: Program Counter用来放置指令的内存地址, 只需要10位就可以表示1024个内存地址
    Ai:


7. What is the size of the data bus in the computer in P5-3?
    Answer: 和word一样18位
    Ai:


8. What is the size of the address bus in the computer in P5-3?
    Answer: 10位表示1024个内存地址
    Ai:


9. What is the minimum size of the control bus in the computer in P5-3?
    Answer: 一般来说最少4位
    Ai:


10. A computer uses isolated I/O addressing. Its memory has 1024 words. If each controller has 16 registers, how many controllers can be accessed by this computer?
    Answer: 1024/16 = 64个controller
    Ai:


11. A computer uses memory-mapped I/O addressing. The address bus uses ten lines (10 bits). If memory is made up of 1000 words, how many four-register controllers can be accessed by the computer?
    Answer: 10bits能表示1024个内存地址, 1024-1000=24, 24/4 = 6个controller
    Ai:


12. Using the instruction set of the simple computer in Section 5.8, write the code for a program that performs the following calculation: D ← A + B + C, in which A, B, C, and D are integers in two’s complement format. The user types the value of A, B, and C, and the value of D is displayed on the monitor.
    Answer: 
    Ai:


13. Using the instruction set of the simple computer, write the code for a program that performs the following calculation:
  B ← A + 3
A and 3 are integers in two’s complement format. The user types the value of A and the value of B is displayed on the monitor. (Hint: use the increment instruction.)
    Answer: 
    Ai:


14. Using the instruction set of the simple computer in Section 5.8, write the code for a program that performs the following calculation:
  B ← A – 2
A and are integers in two’s complement format. The user types the value of A and the value of B is displayed on the monitor. (Hint: use the decrement instruction.)
    Answer: 
    Ai:


15. Using the instruction set of the simple computer in Section 5.8, write the code for a program that adds n integers typed on the keyboard and displays their sum. You need first to type the value of n. (Hint: use decrement and jump instructions and repeat the addition n times.)
    Answer: 
    Ai:


16. Using the instruction set of the simple computer in Section 5.8, write the code for a program that accepts two integers from the keyboard. If the first integer is 0, the program increments the second integer, and if the first integer is 1, the program decrements the second integer. The first integer must be only 0 or 1 otherwise the program fails. The program displays the result of the increment or decrement.
    Answer: 
    Ai:


