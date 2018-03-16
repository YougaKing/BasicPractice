//
// Created by YougaKing on 2018/3/16.
//
#include <stdio.h>


int main() {

    int password = 0, i = 0, number = 55, input;

    printf("\t猜字谜游戏\n");

    while (password != 111111) {

        if (i >= 3)
            return 0;
        i++;
        puts("请输入密码:");

        scanf("%d", &password);
    }

    puts("请输入0到100之间的整数");
    while (input != number) {

        scanf("%d", &input);
        if (input > number) {

            puts("输入数字太大");
        } else {
            puts("输入数字太小");
        }
    }
    printf("你猜对了");

    return 0;
};

