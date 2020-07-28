//
// Created by xin on 7/28/20.
//

// 4. 输入一串字符（换行作为结束）统计元音字母（a,A;e,E;i,I;o,O;u,U）各自出现的次数

#include <stdio.h>

int main() {
    puts("输入一串字符");
    char arr[100];
    scanf("%s", arr);

    int result[5] = {0};

    int index = 0;
    while (arr[index]) {
        char c = arr[index];

        if (c == 'a' || c == 'A')
            result[0]++;

        if (c == 'e' || c == 'E')
            result[1]++;

        if (c == 'i' || c == 'I')
            result[2]++;

        if (c == 'o' || c == 'O')
            result[3]++;

        if (c == 'u' || c == 'U')
            result[4]++;

        index++;
    }

    char *title[5] = {"a,A", "e,E", "i,I", "o,O", "u,U"};
    for (int i = 0; i < 5; ++i)
        printf("%s=%d\n", title[i], result[i]);

    return 0;
}