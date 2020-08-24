//
// Created by xin on 7/28/20.
//

// 4. 输入一串字符（换行作为结束）统计元音字母（a,A;e,E;i,I;o,O;u,U）各自出现的次数

#include <stdio.h>

int main() {
    puts("输入一串字符");

    char chs[100];
    scanf("%s", chs);

    int ret[5] = {0};

    int index = 0;
    while (chs[index]) {
        char ch = chs[index];

        // 元音 a
        if (ch == 'a' || ch == 'A')
            ret[0]++;

        // 元音 e
        if (ch == 'e' || ch == 'E')
            ret[1]++;

        // 元音 i
        if (ch == 'i' || ch == 'I')
            ret[2]++;

        // 元音 o
        if (ch == 'o' || ch == 'O')
            ret[3]++;

        // 元音 u
        if (ch == 'u' || ch == 'U')
            ret[4]++;

        index++;
    }

    char *title[5] = {"a,A", "e,E", "i,I", "o,O", "u,U"};

    for (int i = 0; i < 5; i++){
        printf("%s=%d\n", title[i], ret[i]);
    }

    return 0;
}