//
// Created by xin on 7/29/20.
//

// 12. 求两个自然数的最大公约数和最小公倍数

#include <stdio.h>

int cal(int a, int b) {
    int temp;
    // a 较大的数
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    int i = 0;
    for (i = b; i > 0; i--) {
        if (a % i == 0 && b % i == 0) break;
    }
    return i;
}

int main() {
    int num1, num2;

    puts("请输入两个数字");
    scanf("%d%d", &num1, &num2);

    // 最大公约数
    int gongyue = cal(num1, num2);

    // 最小公倍数: 两个数乘积除以最大公约数
    int gongbei = num1 * num2 / gongyue;

    printf("最大公约数: %d\n最小公倍数: %d\n", gongyue, gongbei);

    return 0;
}