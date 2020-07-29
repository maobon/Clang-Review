//
// Created by xin on 7/29/20.
//

// 13. 对下列分段函数，输入x的值后，计算并输出y的值（保留两位小数）
// y =
// x^2 + x + 1   当x≤0
// cos(x)        当0<x<10
// √x+1          当x≥10

#include <stdio.h>
#include <math.h>

float calculate(float x);

int main() {
    puts("请输入x的值");
    float param;
    scanf("%f", &param);

    float ret = calculate(param);
    printf("x=%.4f\ny=%.4f\n", param, ret);

    return 0;
}

// TODO math的方法要对一下
float calculate(float x) {

    if (x <= 0) {
        return sinf(x);

    } else if (x > 0 && x <= 10) {
        return expf(2 * x);

    } else if (x > 10) {
        return sqrtf(powf(x, 3) + powf(x, 2) + 1);
    }
}