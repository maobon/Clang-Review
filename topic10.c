//
// Created by xin on 7/29/20.
//

// 10. 输出字符串

#include <stdio.h>

int main() {

    char arr[] = "World\0Wide\0Web"; // '\0' 打印输出会停止

    // 指针(首地址) + 偏移量
    printf("%s\n%s\n%s\n", arr, arr + 6, arr + 11);

    char *p = arr + 1;
    //char c = *p;
    printf("%s\n", p);

    // 测试
    char string[] = "this_is_test";
    char *ptr = string;
    printf("%s", ptr);

    return 0;
}