//
// Created by xin on 7/29/20.
//

// 10. 输出字符串

#include <stdio.h>

int main() {

    char arr[] = "World|Wide|Web";

    // 指针(首地址) + 偏移量
    printf("%s\n%s\n%s\n", arr, arr + 6, arr + 11);

    return 0;
}