//
// Created by xin on 7/28/20.
//

// 7. 输入年（year）、月（month）和日（day），计算并输出该日是该年的第几天（sumdays)

#include <stdio.h>
#include <time.h>

int main() {
    puts("输入年（year）月（month）和日（day）");

//    int year, month, day;
//
//    scanf("%d%d%d", &year, &month, &day);
//     printf("%d年%d月%d日", year, month, day);

    struct tm *tm;
    tm->tm_year = 2020;
    tm->tm_mon = 7;
    tm->tm_mday = 28;

    time_t tt = mktime(tm);
    char *ret = ctime(tt);

    printf("%s", ret);

    //mktime(tm);

    return 0;
}