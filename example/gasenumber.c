//
// Created by YougaKing on 2018/3/16.
//
#include <stdio.h>


int main() {

    int password = 0, i = 0, number = 55, input;

    printf("\t��������Ϸ\n");

    while (password != 111111) {

        if (i >= 3)
            return 0;
        i++;
        puts("����������:");

        scanf("%d", &password);
    }

    puts("������0��100֮�������");
    while (input != number) {

        scanf("%d", &input);
        if (input > number) {

            puts("��������̫��");
        } else {
            puts("��������̫С");
        }
    }
    printf("��¶���");

    return 0;
};

