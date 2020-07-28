//
// Created by xin on 7/28/20.
//

// 5. 将一个三位数输入后反向输出（如123，输出为321）

#include <stdio.h>

int main() {
    puts("输入一个三位数");

    int num;
    scanf("%d", &num);

    if (num > 1000 || num < 100) {
        printf("输入非法");
        return 0;
    }

    printf("用户输入: %d\n", num);

    int hundred = num / 100;
    int ten = (num / 10) % 10;
    int unit = num % 10;

    // printf("百位:%d 十位:%d 个位:%d\n", hundred, ten, unit);

    num = unit * 100 + ten * 10 + hundred;
    printf("反向输出: %d", num);

    return 0;
}