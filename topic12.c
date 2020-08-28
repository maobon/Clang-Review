//
// Created by xin on 7/29/20.
//

// 12. 求两个自然数的 最大公约数 和 最小公倍数

#include <stdio.h>

/**
 * 最大公约数
 * @param a
 * @param b
 * @return
 */
int cal_common_divisor(int a, int b) {
    int temp;

    // a 较大的数
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    int i = 0;
    for (i = b; i > 0; i--) {
        if (a % i == 0 && b % i == 0) break; // 公共的可以整除的
    }

    return i;
}

int main() {
    int num1, num2;

    puts("请输入两个数字");
    scanf("%d %d", &num1, &num2);

    // 最大公约数
    int common_divisor = cal_common_divisor(num1, num2);

    // 最小公倍数: 两个数乘积 除以 最大公约数
    int common_multiple = num1 * num2 / common_divisor;

    printf("最大公约数: %d\n最小公倍数: %d\n", common_divisor, common_multiple);

    return 0;
}