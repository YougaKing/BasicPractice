//
// Created by YougaKing on 2018/3/16.
//
#include <stdio.h>

/**
 * 判断Armstrong数(阿姆斯壮数)
 *
 * Armstrong 数，就是n位数的各位数的n次方之和等于该数，如：
    153=1^3+5^3+3^3
 * @return
 */
int main() {
    printf("输入一个正整数");

    int number, remainder, origin;
    int array[100];
    int count = 0;
    scanf("%d", &number);
    origin = number;

    while (number != 0) {
        remainder = number % 10;
        array[count] = remainder;
        number /= 10;
        count++;
    };

    int result = 0;

    for (int j = 0; j <= count; ++j) {
        int p = array[j];
        int d = p;
        for (int i = 1; i < count; ++i) {
            p = p * d;
        }
        result += p;
    }
    if (result == origin) {
        printf("%d 是阿姆斯壮数", origin);
    } else {
        printf("%d 不是阿姆斯壮数", origin);
    }
    return 0;
};