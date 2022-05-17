#include <stdio.h>
#define PI 22.0/7
// ให้รับค่า r ของวงกลมแล้วแสดงออกมาเป็น ความยาวรอบรูป และ พื้นที่ของวงกม

int main() {
    // definition
    float r;
    float circumference, area;

    // input
    printf("Input radius: ");
    scanf("%f", &r);

    // process
    circumference = 2 * PI * r;
    area = PI * r * r;

    // output
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);
}


