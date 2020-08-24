//
// Created by xin on 7/28/20.
//

// 3. 正序和反序打印英文字母

#include <stdio.h>

int main() {

    char ch;

    puts("正序");
    for (ch = 'A'; (int) ch <= (int) 'Z'; ch++) {
        printf("%c", ch);
    }

    printf("\n");

    puts("倒序");
    for (ch = 'Z'; ch >= (int) 'A'; ch--) {
        printf("%c", ch);
    }

    return 0;
}
