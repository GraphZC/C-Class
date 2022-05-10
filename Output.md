# C Programming Part 1 - 3

By Tanaroeg  O-Charoen

## Output

Output ในภาษา C นั้นมีหลายฟังก์ชัน และหลาย Stream ซึ่ง Stream ที่มากับภาษา C นั้นจะมี อยู่ 3 Stream นั่นก็คือ stdin stdout stderr ซึ่งการ output จะมีที่ใช้หลักๆก็คือ stdout และใช้ stderr ในการแสดง error ออกมา  

เรามาเริ่มรู้จักฟังก์ชั่นในการปริ้นกันก่อน  

### printf()

`printf(const char *format, ...)`  

ฟังก์ชั่นนี้เป็นฟังก์ชั่นในการปริ้นแบบมีการ Format โดยจะใช้ `%[width][flags].[precistion length]`

โดยจะมี Flag สำหรับการปริ้นของแต่ละ Data type หลักๆอยู่ดังนี้

|        Type         | Flags |
| :-----------------: | :---: |
|      Character      |   c   |
|   Signed Integer    | d, i  |
|   Floating point    |   f   |
| String of chaacters |   s   |
|  Unsigned integer   |   u   |
|       Pointer       |   p   |

**เพิ่มเติม**
ใส่ `0` ไว้ข้างหน้าเพื่อ width เพื่อให้ใส่ 0 ตรงพื้นที่ที่ว่างอยู่ (Zero fill)  
ใส่ `-` ไว้ข้างหน้าเพื่อ width เพื่อให้ตัวอักษรหรือตัวเลขมาชิดซ้ายแทน  
ใส่ `l` สำหรับปริ้นตัวเลข จำนวนเต็มที่มี `long` นำหน้า
ใส่ `L` สำหรับปริ้นตัวเลข ทศนิยมที่มี `long` นำหน้า

### putchar()

`putchar(char c)` เป็นฟังก์ขั่นที่ใช้สำหรับปริ้นตัวอักษรที่เป็นประเภท character

### puts()

`puts(char *s)` เป็นฟังก์ชั่นที่ใช้ในการปริ้นข้อมูลประเภท String of character โดยฟังก์ชั่นนี้จะมีการ newline เมื่อพิมพ์เสร็จ
