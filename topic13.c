//
// Created by xin on 7/29/20.
//

// 13. 对下列分段函数，输入x的值后，计算并输出y的值（保留两位小数）
// y =
// x^2 + x + 1   当 x ≤ 0
// cos(x)        当 0 < x < 10
// √x+1          当 x ≥ 10

#include <stdio.h>
#include <math.h>

float calculate(float x);

int main() {
    puts("请输入x的值");

    float param;
    scanf("%f", &param);

    float ret = calculate(param);
    printf("x=%.2f\n y=%.2f\n", param, ret);

    return 0;
}

// TODO math API
// https://www.runoob.com/cprogramming/c-standard-library-math-h.html

float calculate(float x) {

    if (x <= 0) {
        // x^2 + x + 1   当 x ≤ 0
        return powf(x, 2) + x + 1;

    } else if (x > 0 && x < 10) {
        // cos(x)        当 0 < x < 10
        return cosf(x);

    } else if (x >= 10) {
        // √x+1          当 x ≥ 10
        return sqrtf(x) + 1;
    }
}