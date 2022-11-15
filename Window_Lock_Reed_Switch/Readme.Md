* This folder contains three files, every program is different.

1. First program named main.ino is very simple to read and it works just fine. The advantages of this program are easy to read, less complexity and the disadvantages are very insecure, inefficient, cannot be reused.

2. Second program named mainSecure.ino is written on the concepts of Object Oriented Programming (OOP) in a single file. So, the code is very long. The advantages of this code are high security, easy to read, clean code, can be reused and the disadvantage is hard to debug.

3. Third program named main_oop is also written on OOP but, in an efficient manner. Every class is written in separate header files (.h) and every members are written in .cpp files. In order to add another switch and alert system, you need to just create another instance of Reed and Alert and add the pins using #define macros.

Note : Put every files in a single folder named main_oop and upload main_oop.ino to the microcontroller.