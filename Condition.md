# C Programming Part 1 - 2

By Tanaroeg  O-Charoen

## Condition

### If..else

เป็นคำสั่งในการเช็คเงื่อนไขโดนจะมีรูปแบบการเขียนที่ที่แตกต่างกันไป

#### If

รูปแบบการใช้งานของ if ก็คือ

```c
if (expression)
    statement;
```

```c
if (expression) {
    statement 1;
    statement 2;
        .
        .
}
```

ตัวอยย่างการใช้าน

```c
#include <stdio.h>

int main() {
    int x = 20;
    if (x > 0)
        printf("%d is positive number!\n", x); 
}
```

โดยถ้า expression เป็นจริงโปรแกรมจะเข้าไปทำ statement ใน if แต่ถ้า statement ไม่เป็นจริงก็จะทำการข้ามไปเลย

**เพิ่มเติม** ในภาษา c ในการเขียนอะไรที่เป็น block ตามปกติโปรแกรมจะทำงานไปจนถึง `;` แต่ถ้าหากเราต้องการ statement หลายๆ statement เราจะใช้ `{}` ในการครอบ Statement ไว้แทน

#### Else

จะเป็นคำสั่งที่ใช้คู่กับ if โดยเป็นการเช็คว่าถ้าเงื่อนไขไม่ตรงตามใน if ก็จะลงมาทำใน block ของ else

```c
if (expression)
    statement;
else
    statement;
```

```c
if (expression) {
    statement 1;
    statement 2;
        .
        .
} else {
    statement 3;
    statement 4;
        .
        .
}
```

ตัวอย่างการใช้งาน

```c
#include <stdio.h>

int main() {
    int x = 20;
    if (x > 0)
        printf("%d is positive number!\n", x);
    else
        printf("%d is negative number!\n", x);
}
```

```c
#include <stdio.h>

int main() {
    int ages;
    printf("Enter ages: ");
    scanf("%d", &ages);
    if (ages < 0) {
        printf("Invalid ages, please try again!\n");
    } else {
        printf("Your ages is: %d\n", ages);
    }
}
```

### Else if

else if จะเป็นคำสั่งที่ใช้สำหรับเช็คเงื่อนไขเพิ่มเติมก่อนที่จะลงไปทำ else โดน else if จะมีกี่ตัวก็ได้ต่างกับ if กับ else ที่มีได้แค่ตัวเดียว  
  
**Flow การเช็คเงื่อนไข** if -> else if -> else

```c
if (expression)
    statement;
else if (expression)
    statement;
else if (expression)
    statement;
else
    statement;
```

```c
if (expression) {
    statement 1;
    statement 2;
        .
        .
}else if (expression){
    statement 3;
    statement 4;
        .
        .
}else if (expression){
    statement 5;
    statement 6;
        .
        .
}else{
    statement 7;
    statement 8;
        .
        .
}
```

ตัวอย่างการใช้งาน

```c
#include <stdio.h>

int main() {
    int ages;
    printf("Enter ages: ");
    scanf("%d", &ages);
    if (ages < 0) {
        printf("Invalid ages, please try again!\n");
    } else if(ages >= 18) {
        printf("You can pass!\n");
    } else {
        printf("You can't pass!\n");
    }
}
```

### switch..case

จะใช้ในการเช็คเงื่อนไขเหมือนกันแต่การเช็คนั้นก็จะมี syntax ที่แตกต่างกันไป โดย if..else นั้นจะเป็นการเช็คโดยใช้ Expression แต่ switch..case จะเป็นการเช็คแบบการใช้ค่าคงที่

```c
switch (expression) {
    case VALUE_1:
        // statements
    case VALUE_2:
        // statements
        break;
    case VALUE_3:
        // statements
        break;
    default:
        // statements
}
```

การทำงานนั้นจะทำจากบนลงล่างโดยการถ้า expression เราตรงกับ case ได้ก็จะ **ทำไปจนเจอ break;** แต่ถ้าไม่ตรงเงื่อนไขอะไรเลยก็จะลงไปทำใน `default`

ตัวอย่างการใช้งาน

```c
#include <stdio.h>

int main() {
    char c;
    switch (c = getchar()) {
        case 'a':
        case 'A':
            printf("Turn left\n");
            break;
        case 'd':
        case 'D':
            printf("Turn right\n");
            break;
        default:
            printf("Invalid input!\n");
    }
}
```