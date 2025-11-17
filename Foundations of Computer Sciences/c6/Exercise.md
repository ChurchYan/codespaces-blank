1. What is the difference between a point-to-point and a multipoint connection?  
    Answer: 点到点是两个电脑彼此之间的连接, 二multipoint是多个点到点之间的彼此相连
    Ai:
2. List common physical network topologies.  
    Answer: 总线型(bus), 星型(star), 环形(ring), 网状型(mesh)
    Ai:
3. Define the three types of networks.  
    Answer: 局域网, 广域网和城域网
    Ai:
4. Distinguish between an internet and the internet.  
    Answer: the internet指全球的互联网(也就是我们用的), internet指任何互相连接的网络合集
    Ai:
5. Name the layers of the TCP/IP protocol suite.  
    Answer: application layer, transport layer, network layer, data link layer以及physical layer
    Ai:
6. What is the main function of the application layer in the TCP/IP protocol suite? What type of addresses are used in this layer?  
    Answer: 负责提供服务, 处理用户的请求, 将用户的操作转换为网络中的数据. address是url
    Ai: 

7. What is the main function of the transport layer in the TCP/IP protocol suite?  What type of addresses are used in this layer?  
    Answer: 传输层负责不同主机上的两个进程彼此之间可以可靠的完整的收发消息, address是端口
    Ai:

8. What is the main function of the network layer in the TCP/IP protocol suite?  What type of addresses are used in this layer?  
    Answer: 网络层负责决定路由之间的转发, 下一个节点去往哪一个路由, address是ip地址
    Ai:

9. What is the main function of the data-link layer in the TCP/IP protocol suite?  What type of addresses are used in this layer? 
    Answer: 负责将数据传送到指定硬件地址的路由中, address是mac地址
    Ai: 
10. What is the main function of the physical layer in the TCP/IP protocol suite?  Why are addresses not used in the physical layer?
    Answer: 只负责将数据以电信号的形式传递出去就可以了, 物理层没有address, 只有0和1
    Ai:
11. Define node-to-node delivery. In which layer does this type of delivery take place?
    Answer: 节点到节点, 数据链路层负责从这个节点到下一个节点
    Ai:
12. Define source-to-destination delivery. In which layer does this type of delivery take place?
    Answer: 网络层负责source to destination
    Ai:
13. Define process-to-process delivery. In which layer does this type of delivery take place?
    Answer: process to process就是在传输层, 通过端口号可以指定对应的process
    Ai:
14. What is the purpose of SMTP?
    Answer: 负责传输简单的邮件发送及转发, 且只能传输纯文本
    Ai:
15. What is the purpose of FTP?
    Answer: 彼此之间传输文件
    Ai:
16. What is the purpose of TELNET?
    Answer: 登录远程电脑,将远程电脑返回的结果显示在本地终端
    Ai:
17. What is the difference between local login and remote login?
    Answer: local login登录的是当前主机, remote登录的是远程主机
    Ai:
18. Compare and contrast the three internet document types: static, dynamic and active.
    Answer: static指每次都会返回静态的网页,不会发生变化. Dynamic指会根据当前user或时间返回不同展示效果的网页, active网页指可以与用户交互, 动画或其他
    Ai:

1. What is the highest TCP/IP layer responsible for each of the following activities?
a. Sending a frame to the next node.
b. Sending a packet from the source to the destination.
c. Delivery of a long message from the source computer to the destination computer.
d. Logging in to a remote computer.
    Answer: data link layer, network layer, application layer, application layer
    Ai:c. 将长消息从源主机送到目标主机 — 应为传输层（负责分段/重组、端到端可靠性），你写的“应用层”不对。
2. A small part of a bus LAN with 200 stations is damaged. How many stations are affected by this damage?
    Answer: 
    Ai:
3. A small part of a star LAN with 200 stations is damaged. How many stations are affected by this damage?
    Answer: 
    Ai:
4. A small part of a ring LAN with 200 stations is damaged. How many stations are affected by this damage?
    Answer: 
    Ai:
5. If you have a square room with a computer in each corner, which topology needs least cabling? Justify your answer.
a. A bus LAN.
b. A ring LAN.
c. A star LAN with a hub in the center of the room.
    Answer: 
    Ai:
6. If you have a square room with a computer in each corner, which topology is more reliable? Justify your answer.
a. A bus LAN.
b. A ring LAN.
c. A star LAN with a hub in the center of the room.
    Answer: 
    Ai:
7. An engineer notices that the data received by computers at the two ends of a bus LAN contains many errors. What do you think is the problem? What can be done to solve the problem?
    Answer: 
    Ai:
8. What is the advantage of having three transport protocols in TCP/IP?
    Answer: 
    Ai:
9. Change the following IP addresses from dotted decimal notation to binary notation:
a. 112.32.7.28
b. 129.4.6.8
c. 208.3.54.12
d. 38.34.2.1
e. 255.255.255.255

    Answer: 
    Ai:
10. Change the following IP addresses from binary notation to dotted decimal notation:
a. 01111110 11110001 01100111 01111111
b. 10111111 11011100 11100000 00000101
c. 00011111 11110000 00111111 11011101
d. 10001111 11110101 11000011 00011101
e. 11110111 10010011 11100111 01011101

    Answer: 
    Ai:
11. Explain the client-server model on the internet. In which layer of the TCP/IP protocol suite is the model implemented?
    Answer: 
    Ai:

12. Separate the local part and the domain name in the following email addresses:
a. madeline@belle.gov
b. lindsey@jasmine.com
c. wuteh@hunan.int
d. honoris@queen.org

    Answer: 
    Ai:
13. Explain the difference between an email address and an IP address. Is there a one-to-one relationship between the two addresses?

    Answer: 
    Ai:
14. Explain the difference between FTP and TELNET. When would you use a FTP and when would you use TELNET?

    Answer: 
    Ai:
15. A user uses a browser to download a game program. What type of document is downloaded?

    Answer: 
    Ai:
16. A user uses a browser to download a technical document. What type of document is downloaded?

    Answer: 
    Ai:
17. Write a URL that uses HTTP to access a file with the path /user/general in a computer with the alias name www.hadb.

    Answer: 
    Ai: