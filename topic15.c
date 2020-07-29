//
// Created by xin on 7/29/20.
//

// 15. 输入学生的成绩后，输出其字母等级

#include <stdio.h>

char get_student_level(float score);

int main() {
    float x = 0;
    do {
        puts("请输入学生成绩");
        scanf("%f", &x);
    } while (x < 0 || x > 100);

    char result = get_student_level(x);
    printf("成绩评分:%c\n", result);
}

char get_student_level(float score) {
    int ten = (int) (score / 10);
    switch (ten) {
        case 10:
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        default:
            return 'E';
    }
}