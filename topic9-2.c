//
// Created by xin on 7/29/20.
//

// 9.2 二维数组输出杨辉三角形

#include <stdio.h>

#define N 10


int main() {

    int i, j, yh[N][N];

    for (i = 0; i < N; i++) {
        yh[i][0] = yh[i][i] = 1;

        for (j = 1; j < i; j++) {
            yh[i][j] = yh[i - 1][j - 1] + yh[i - 1][j];
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 1; j <= 15 - i; j++) {
            printf("  ");
        }

        for (j = 0; j <= i; j++) {
            printf("%4d", yh[i][j]);
        }

        printf("\n");
    }

    return 0;
}