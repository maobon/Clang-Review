//
// Created by xin on 7/29/20.
//

// 19. 输入实数x，按下列公式计算并输出x和y的值（小数点后保留3位）
//
// y =
// sin x          x <= 0
// (x^2 + 1)开平方 0 <= x <= 10
// e^x            x > 10

#include <stdio.h>
#include <math.h>

float calculate(float x);

int main() {
    puts("请输入x的值");
    float param;
    scanf("%f", &param);

    float ret = calculate(param);
    printf("x=%.3f\ny=%.3f\n", param, ret);

    return 0;
}

// TODO math API
// https://www.runoob.com/cprogramming/c-standard-library-math-h.html

float calculate(float x) {

    if (x <= 0) {
        // sin x          x <= 0
        return sinf(x);

    } else if (x >= 0 && x <= 10) {
        // (x^2 + 1)开平方 0 <= x <= 10
        return sqrtf(powf(x, 2) + 1);

    } else if (x > 10) {
        // e^x            x > 10
        return expf(x);
    }
}