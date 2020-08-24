//
// Created by xin on 7/29/20.
//

// 14. ++, --的理解和使用

#include <stdio.h>

int main() {

    int i = 8, j = 10, m, n;

    m = ++i;
    n = j++;

    printf("%d, %d, %d, %d\n", i, j, m, n);

    return 0;
}