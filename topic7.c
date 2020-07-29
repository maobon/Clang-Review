//
// Created by xin on 7/28/20.
//

// 7. 输入年（year）、月（month）和日（day），计算并输出该日是该年的第几天（sumdays)

#include <stdio.h>

int main() {
    puts("输入年（year）月（month）和日（day）");

    static int days_of_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int year, month, day;
    scanf("%d%d%d", &year, &month, &day);

    int total_days = 0;

    for (int i = 1; i < month; i++) {
        int dom = days_of_month[i - 1];
        printf("统计月份[%d]:%d\n", i, dom);
        total_days += dom;
    }

    if (year % 4 == 0 || year % 400 == 0) {
        puts("是闰年 +1");
        total_days += 1;
    }

    printf("当月已过天数:%d\n", day);
    total_days += day;

    printf("该日是该年的第几天:%d天", total_days);
    return 0;
}