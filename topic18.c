//
// Created by xin on 7/29/20.
//

// 18. 有一个磁盘文件，第一次将它的内容显示在屏幕上, 第二次把它复制到另一文件上

#include <stdio.h>

int main() {

    char *path1 = "../file_1.txt";
    char *path2 = "../file_2.txt";

    FILE *file_1 = fopen(path1, "r");
    if (file_1 == NULL) {
        puts("open file_1 failed");
        return 0;
    }

    FILE *file_2 = fopen(path2, "w");
    if (file_2 == NULL) {
        puts("open file_2 failed");
        return 0;
    }

    // 第一次将它的内容显示在屏幕上
    char content[100];
    while (fscanf(file_1, "%s", content) == 1) {
        printf("file content: %s", content);
    }

    rewind(file_1);

    // 第二次把它复制到另一文件上
    while (fscanf(file_1, "%s", content) == 1) {
        fprintf(file_2, "%s", content);
    }

    fclose(file_2);
    fclose(file_1);

    return 0;
}