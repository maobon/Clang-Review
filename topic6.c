//
// Created by xin on 7/28/20.
//

// 6. 公鸡5元/只，母鸡3元/只，小鸡3只/元，100元钱买100只鸡，求出所有的答案

#include <stdio.h>

int main() {

    // cock 公鸡
    // hen 母鸡
    // chicken 小鸡
    int cock, hen, chicken;

    for (cock = 0; cock <= 20; cock++) {
        for (hen = 0; hen <= 33; hen++) {

            chicken = 100 - cock - hen;

            // TODO ** 7 和 4 是怎么来的 ??
            if (7 * cock + 4 * hen == 100) {
                printf("公鸡=%d 母鸡=%d 小鸡=%d\n", cock, hen, chicken);
            }
        }
    }

    return 0;
}