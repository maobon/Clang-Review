//
// Created by xin on 7/28/20.
//

// 1. 输出九九表
// 1*1=1
// 1*2=2 2*2=4
// ……
// 1*9=9 2*9=18 …… 9*9=81

#include <stdio.h>

int main() {

    for (int i = 0; i <= 9; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d*%d=%d ", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}
