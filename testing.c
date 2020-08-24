//
// Created by xin on 8/24/20.
//

#include <stdio.h>

int main() {
    printf("please input something ...\n");

    char string[50];
    scanf("%s", string);
    printf("user_input:%s\n", string);

    // 字符串末尾以 '\0' 结尾

    char *ptr = string; // 指针

    // 遍历字符串
    while (*ptr) { // *ptr 指针指向的字符

        printf("%c", *ptr); // 获取当前指针指向的字符

        ptr++; // 指针后移一位
    }

    return 0;
}