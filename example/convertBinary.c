//
// Created by YougaKing on 2018/3/16.
//
#include <stdio.h>
#include <math.h>


long long convertDecimalToBinary(int n) {
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n != 0) {
        remainder = n % 2;
        printf("Step %d: %d/2, ���� = %d, �� = %d\n", step++, n, remainder, n / 2);
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}

int main() {
//    long long n;
//    printf("����һ����������: ");
//    scanf("%lld", &n);
//    printf("�������� %lld ת��Ϊʮ����Ϊ %d", n, convertBinaryToDecimal(n));

    int n;
    printf("����һ��ʮ������: ");
    scanf("%d", &n);
    printf("ʮ������ %d ת��Ϊ������λ %lld", n, convertDecimalToBinary(n));
    return 0;
}

//
//int convertBinaryToDecimal(long long n) {
//    int decimalNumber = 0, i = 0, remainder;
//    while (n != 0) {
//        remainder = n % 10;
//        n /= 10;
//        decimalNumber += remainder * pow(2, i);
//        ++i;
//    }
//    return decimalNumber;
//}


