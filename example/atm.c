//
// Created by YougaKing on 2018/3/16.
//
#include <stdio.h>

int main() {

    int option, balance = 0, withdrawals;
    while (1) {
        do {
            puts("================");
            puts("|  请按提示操作  |");
            puts("|  1.查询       |");
            puts("|  2.取款       |");
            puts("|  3.存款       |");
            puts("|  4.退出       |");
            puts("================");
            scanf("%d", &option);
        } while (option != 1 && option != 2 && option != 3 && option != 4);

        switch (option) {
            case 1:
                puts("==================");
                printf("|  你的账户为%d元  |\n", balance);
                puts("|  请安任意键继续  |");
                puts("==================");
                option = 0;
                while (option == 0) {
                    scanf("%d", &option);
                }
                break;
            case 2:
                if (balance <= 0) {
                    puts("==================");
                    puts("|  你的账户为0元   |");
                    puts("|  无法取款        |");
                    puts("|  请安任意键继续  |");
                    puts("==================");
                } else {
                    puts("======================");
                    puts("|  请输入你要取款的金额  |");
                    puts("======================");
                    scanf("%d", &withdrawals);
                    if (withdrawals == 0) break;
                    if (withdrawals > balance) {
                        puts("==============================");
                        puts("|  你的取款金额大于你的账户余额   |");
                        puts("|  无法取款                    |");
                        puts("|  请安任意键继续               |");
                        puts("==============================");
                    } else {
                        balance -= withdrawals;
                        puts("==============================");
                        printf("|  你成功取款%d元   |", withdrawals);
                        puts("|  请安任意键继续               |");
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
