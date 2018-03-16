//
// Created by YougaKing on 2018/3/14.
//
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

/*
 * ��һԪ���η��̣�ax2+bx+c=0 �ĸ���
 */
void equation() {
    float a, b, c;
    printf("��һԪ���η��̣�ax2+bx+c=0 �ĸ�\n");
    printf("���뷽�̵�����ϵ��:");

    scanf("%f %f %f", &a, &b, &c);

    float x1, x2, d;

    d = sqrtf(b * b - 4 * a * c);

    x1 = (-b + d) / 2 * a;
    x2 = (-b - d) / 2 * a;

    printf("x1 = %0.2f , x2 = %0.2f", x1, x2);
}


void leapYear() {
    printf("������ݣ�");
    int year;

    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d ������", year);
            } else {
                printf("%d ��������", year);
            }
        } else {
            printf("%d ������", year);
        }
    } else {
        printf("%d ��������", year);
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

    printf("����ڼ���");

    scanf("%d", &n);

    printf("쳲���������: ");

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

    printf("����һ������:");
    scanf("%d", &n);


    origin = n;

    while (n != 0) {

        yu = n % 10;

        printf("%d ��10���� ��%d\n", n, yu);

        result = result * 10 + yu;

        n /= 10;
    }

    if (result == origin) {
        printf("%d �ǻ�����", origin);
    } else {
        printf("%d ���ǻ�����", origin);
    }

}


void prime() {
    printf("�����������:");
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
            printf("%d ������\n", i);
            count++;
        }
    }
    printf("%d ������ %d ������", max, count);
}


void perfectNumber() {
    printf("�����������:");

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
            printf("%d ������ , ����Ϊ :", j);
            for (int i = 0; i < 100; ++i) {
                if (factor[i] != 0) {
                    printf("%d,", factor[i]);
                }
            }
            printf("\n");
        }
    }
    printf("%d ������ %d ������", max, count);
}

/**
 * ��һ��4��4�����������ʱ����ת90�Ⱥ������Ҫ��ԭʼ���������������룬��������4��4�еķ�ʽ�����
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
 * ��������ַ����������
 */
void reverseStr() {
    printf("�����ַ���");
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