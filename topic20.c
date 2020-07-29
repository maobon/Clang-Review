//
// Created by xin on 7/29/20.
//

// 20.
//
// （1）编写一个计算摄氏（C）到华氏（F）转换的函数。函数头是：float temp（float c）
//     计算公式：F= ....
//
// （2）编写主函数从键盘输入摄氏温度的值，调用上述函数输出摄氏及华氏温度的值（小数点后保留两位）

#include <stdio.h>

float temp(float c);

int main() {
    puts("请输入华氏度");
    float f;
    scanf("%f", &f);
    float c = temp(f);
    printf("华氏度: %.2f°F\n摄氏度: %.2f°C\n", f, c);
    return 0;
}

float temp(float c) {
    return ((float) 5 / 9) * (c - 32);
}

