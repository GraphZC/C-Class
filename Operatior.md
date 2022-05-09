# C Programming Part 1 - 3

By Tanaroeg  O-Charoen

## Operator

Operator หรือตัวดำเนินการของภาษา C โดยจะมี Operator 2 แบบใหญ่ๆ

- **Unary Operator** คือเป็นตัวดำเนินการที่ดำเนินการกับ Operand 1 ตัว
- **Binary Operator** คือเป็นตัวแปรที่ดำเนินการกับ Operand 2 ตัว

ซึ่งก็จะแบ่งย่อยลงไปอีก ซึ่งแต่ละ Operator ก็จะมีการเรียงความสำคัญที่ต่างกันดังตาราง

![PrecedenceTable](http://iamgraph.tk/img-md/C-Learning/C-Operator-Precedence.png)

ตัวที่อยู่สูงกว่า (Precedence สูงกว่า) โปรแกรมก็จะทำ Operator นั้นๆก่อนตัวอื่น แล้ว Operator ยังมีคุณสมบัติในการที่จะ Chain กันได้อีก เช่น

```c
#include <stdio.h>

int main() {
    int x;
    int y;
    x = 5 + 2 * 2;
    y = x = 10;
}
```
