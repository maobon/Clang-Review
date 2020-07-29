//
// Created by xin on 7/29/20.
//

// 9.1 一维数组输出杨辉三角形

#include <stdio.h>

#define N 10

int main() {

    int i, j, yh[N];

    for (i = 0; i < N; i++) {
        yh[i] = 1;
        for (j = i - 1; j >= 1; j--)yh[j] += yh[j - 1];
        for (j = 1; j <= 15 - i; j++)printf("  ");
        for (j = 0; j <= i; j++)printf("%4d", yh[j]);
        printf("\n");
    }

    return 0;
}