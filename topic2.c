//
// Created by xin on 7/28/20.
//

// 2. 任意输入三条边(a,b,c)，若能构成三角形计算其面积，判断是否为等腰、等边、直角或任意, 否则输出“不能构成三角形”

#include <stdio.h>
#include <math.h>

/**
 * 是否可以构成三角形
 * @param a
 * @param b
 * @param c
 * @return
 */
int is_triangle(float a, float b, float c) {

    if (a + b > c && a + c > b && b + c > a) {
        puts("可以构成三角形");
        return 0;

    } else if (fabsf(a - b) < c && fabsf(a - c) < b && fabsf(b - c) < a) {
        puts("可以构成三角形");
        return 0;

    } else {
        puts("不能构成三角形");
        return -1;
    }
}

/**
 * 三角形面积计算
 * @param a
 * @param b
 * @param c
 * @return
 */
float calculate_area(float a, float b, float c) {
    float t = (a + b + c) / 2.0;
    return sqrtf(t * (t - a) * (t - b) * (t - c));
}

/**
 * 判断三角形的类型
 * @param a
 * @param b
 * @param c
 * @return
 */
char *get_type(float a, float b, float c) {

    if (a == b && b == c) {
        return "等边";

    } else if (a == b || b == c || a == c) {
        return "等腰";

    } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        return "直角";

    } else {
        return "任意";
    }
}


int main() {

    float a, b, c;

    puts("请输入三角形的三条边长度:");
    scanf("%f %f %f", &a, &b, &c);

    if (is_triangle(a, b, c) != 0)
        return 0;

    float area = calculate_area(a, b, c);
    printf("面积: %.2f\n", area);

    printf("三角形类型: %s\n", get_type(a, b, c));

    return 0;
}