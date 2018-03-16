//
// Created by YougaKing on 2018/3/14.
//
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

/*
 * 求一元二次方程：ax2+bx+c=0 的根。
 */
void equation() {
    float a, b, c;
    printf("求一元二次方程：ax2+bx+c=0 的根\n");
    printf("输入方程的三个系数:");

    scanf("%f %f %f", &a, &b, &c);

    float x1, x2, d;

    d = sqrtf(b * b - 4 * a * c);

    x1 = (-b + d) / 2 * a;
    x2 = (-b - d) / 2 * a;

    printf("x1 = %0.2f , x2 = %0.2f", x1, x2);
}


void leapYear() {
    printf("输入年份：");
    int year;

    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d 是闰年", year);
            } else {
                printf("%d 不是闰年", year);
            }
        } else {
            printf("%d 是闰年", year);
        }
    } else {
        printf("%d 不是闰年", year);
    }
}

void multiplication9_9() {
    int max = 9;

    for (int i = 1; i <= max; ++i) {
        for (int f = 1; f <= i; ++f) {
            printf("%d*%d=%d ", i, f, i * f);
        }
        printf("\n");
    }
}

void fibonacciNumbers() {

    int n;

    printf("输入第几项");

    scanf("%d", &n);

    printf("斐波那契数列: ");

    int ago, before, current;

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            ago = 0;
            printf("%d,", ago);
        } else if (i == 1) {
            before = 1;
            printf("%d,", before);
        } else {
            current = ago + before;
            printf("%d,", current);
            ago = before;
            before = current;
        }
    }
}


void palindromes() {

    int n, origin, yu, result = 0;

    printf("输入一个整数:");
    scanf("%d", &n);


    origin = n;

    while (n != 0) {

        yu = n % 10;

        printf("%d 对10求余 余%d\n", n, yu);

        result = result * 10 + yu;

        n /= 10;
    }

    if (result == origin) {
        printf("%d 是回文数", origin);
    } else {
        printf("%d 不是回文数", origin);
    }

}


void prime() {
    printf("输入最大整数:");
    int max, count = 0;
    _Bool b;
    scanf("%d", &max);

    for (int i = 2; i <= max; ++i) {
        b = true;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                b = false;
                break;
            }
        }
        if (b) {
            printf("%d 是素数\n", i);
            count++;
        }
    }
    printf("%d 以内有 %d 个素数", max, count);
}


void perfectNumber() {
    printf("输入最大整数:");

    int max;

    scanf("%d", &max);

    int s, count = 0;
    for (int j = 2; j <= max; ++j) {
        s = 0;
        int factor[100] = {};
        int c = 0;
        for (int i = 1; i <= j / 2; ++i) {
            if (j % i == 0) {
                s += i;
                factor[c] = i;
                c++;
            }
        }
        if (s == j) {
            count++;
            printf("%d 是完数 , 因子为 :", j);
            for (int i = 0; i < 100; ++i) {
                if (factor[i] != 0) {
                    printf("%d,", factor[i]);
                }
            }
            printf("\n");
        }
    }
    printf("%d 以内有 %d 个完数", max, count);
}

/**
 * 将一个4×4的数组进行逆时针旋转90度后输出，要求原始数组的数据随机输入，新数组以4行4列的方式输出。
 */
void array4_4() {

    int a[4][4], b[4][4];

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            a[i][j] = rand();
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("a[ %d ][ %d ] = %d\t", i, j, a[i][j]);
            b[j][3 - i] = a[i][j];
        }
        printf("\n");
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("b[ %d ][ %d ] = %d\t", i, j, b[i][j]);
        }
        printf("\n");
    }
}

/**
 * 将输入的字符串反序输出
 */
void reverseStr() {
    printf("输入字符串");
    char string[100];
    char result[100];

    scanf("%s", string);

    for (int i = 0; i < 100; ++i) {
        result[i] = string[100 - i];
    }



    printf("string = %s\n", string);
    printf("result = %s", result);


}


int main() {
    reverseStr();
}