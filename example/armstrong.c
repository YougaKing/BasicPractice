//
// Created by YougaKing on 2018/3/16.
//
#include <stdio.h>

/**
 * �ж�Armstrong��(��ķ˹׳��)
 *
 * Armstrong ��������nλ���ĸ�λ����n�η�֮�͵��ڸ������磺
    153=1^3+5^3+3^3
 * @return
 */
int main() {
    printf("����һ��������");

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
        printf("%d �ǰ�ķ˹׳��", origin);
    } else {
        printf("%d ���ǰ�ķ˹׳��", origin);
    }
    return 0;
};