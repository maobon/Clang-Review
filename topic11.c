//
// Created by xin on 7/29/20.
//

// 11. 指针数组和二级指针的使用

#include <stdio.h>

int main() {

    int a[5] = {1, 3, 5, 7, 9};

    // 指针数组
    int *num[5] = {&a[0], &a[1], &a[2], &a[3], &a[4]};

    // 二级指针
    int **p = num;

    for (int i = 0; i < 5; i++) {
        printf("%d\n", **p++);
    }

    return 0;
}