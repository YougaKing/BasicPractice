//
// Created by YougaKing on 2018/3/16.
//
#include <stdio.h>

int main() {

    int option, balance = 0, withdrawals;
    while (1) {
        do {
            puts("================");
            puts("|  �밴��ʾ����  |");
            puts("|  1.��ѯ       |");
            puts("|  2.ȡ��       |");
            puts("|  3.���       |");
            puts("|  4.�˳�       |");
            puts("================");
            scanf("%d", &option);
        } while (option != 1 && option != 2 && option != 3 && option != 4);

        switch (option) {
            case 1:
                puts("==================");
                printf("|  ����˻�Ϊ%dԪ  |\n", balance);
                puts("|  �밲���������  |");
                puts("==================");
                option = 0;
                while (option == 0) {
                    scanf("%d", &option);
                }
                break;
            case 2:
                if (balance <= 0) {
                    puts("==================");
                    puts("|  ����˻�Ϊ0Ԫ   |");
                    puts("|  �޷�ȡ��        |");
                    puts("|  �밲���������  |");
                    puts("==================");
                } else {
                    puts("======================");
                    puts("|  ��������Ҫȡ��Ľ��  |");
                    puts("======================");
                    scanf("%d", &withdrawals);
                    if (withdrawals == 0) break;
                    if (withdrawals > balance) {
                        puts("==============================");
                        puts("|  ���ȡ�����������˻����   |");
                        puts("|  �޷�ȡ��                    |");
                        puts("|  �밲���������               |");
                        puts("==============================");
                    } else {
                        balance -= withdrawals;
                        puts("==============================");
                        printf("|  ��ɹ�ȡ��%dԪ   |", withdrawals);
                        puts("|  �밲���������               |");
                        puts("==============================");
                    }
                }
                break;
            case 3:
                break;
            case 4:
                return 0;
        }
    }
    return 0;
}
