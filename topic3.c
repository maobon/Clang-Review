//
// Created by xin on 7/28/20.
//

// 3. 正序和反序打印英文字母

#include <stdio.h>

int main() {
    char c;

    puts("正序");
    for (c = 'A'; c <= (int) 'Z'; c++)
        printf("%c", c);

    printf("\n");
    puts("倒序");
    for (c = 'Z'; c >= (int) 'A'; c--)
        printf("%c", c);

    return 0;
}
